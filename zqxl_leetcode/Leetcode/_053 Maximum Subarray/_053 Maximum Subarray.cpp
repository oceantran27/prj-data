#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<stdio.h>
int maxSubArray(int* nums, int numsSize) {
	int max = nums[0], sum = nums[0];
	for (int i = 1; i < numsSize; i++){
		// ؼǸ
		sum = sum > 0 ? sum : 0;
		// ӵǰ
		sum += nums[i];
		// ֵ
		max = max > sum ? max : sum;
	}
	return max;
}

int main(){
	int a[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	maxSubArray(a, 9);
	return 0;
}
