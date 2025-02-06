#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
using namespace std;

#define min(a,b) (((a)<(b)) ? (a) : (b))
#define max(a,b) (((a)>(b)) ? (a) : (b))

class Solution {
public:
	int maxChunksToSorted(vector<int>& arr) {
		int size = arr.size();
		int *maxArr = (int*)malloc(size * sizeof(int));
		int *minArr = (int*)malloc(size * sizeof(int));
		// maxArr[i] = max(arr[0] arr[i]);
		maxArr[0] = arr[0];
		for (int i = 1; i < size; i++) {
			if (maxArr[i - 1] < arr[i]) {
				maxArr[i] = arr[i];
			}
			else {
				maxArr[i] = maxArr[i - 1];
			}
		}

		// minArr[i] = min(arr[i] arr[end]);
		minArr[size-1] = arr[size-1];
		for (int i = size-2; i >= 0; i--) {
			if (arr[i] < minArr[i + 1]) {
				minArr[i] = arr[i];
			}
			else {
				minArr[i] = minArr[i + 1];
			}
		}

		//ʼ
		int res = 1;
		for (int i = 1; i < size; i++) {
			if (maxArr[i - 1] != maxArr[i] 
				&& minArr[i - 1] != minArr[i]
				&& minArr[i] > maxArr[i - 1]) {
				res++;
			}
		}
		return res;
	}
};

/*0ms*/
class Solution2 {
public:
	//֤ߵСģ֮󲻶
	//άһұСʽ˵ ߿ С ұ߿С
	int maxChunksToSorted(vector<int>& arr) {
		int n = arr.size();
		int ans = 1, lmax = arr[0];
		vector<int> rmin(n);
		rmin[n - 1] = arr[n - 1];
		for (int i = n - 2; i >= 0; i--)
			rmin[i] = min(rmin[i + 1], arr[i]);
		for (int i = 1; i<n; i++) {
			if (rmin[i] >= lmax) {
				ans++;
				lmax = arr[i];
			}
			else {
				lmax = max(lmax, arr[i]);
			}
		}
		return ans;
	}
};

void main() {
	Solution2 s;
	int nums[] = {0,1,4,3,6,7,8,9};
	vector<int> v(nums, nums+8);
	s.maxChunksToSorted(v);
}