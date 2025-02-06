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
#include<malloc.h>
#include<string>
#include<math.h>
/*

*/
void quickSort(int* nums, int s, int e) {
	if (s >= e)
		return;
	int m = nums[(s+e)/2], lo = s, hi = e, t=0;
	while (lo <= hi) {
		while (nums[lo] < m)
			lo++;
		while (nums[hi] > m)
			hi--;
		if(lo<=hi){
			t = nums[lo];
			nums[lo] = nums[hi];
			nums[hi] = t;
			hi--;
			lo++;
		}
	}
	quickSort(nums, s, hi);
	quickSort(nums, lo, e);
}

/*ȿţ*/
bool containsDuplicate(int* nums, int numsSize) {
	quickSort(nums, 0, numsSize-1);
	for (int i = 1; i < numsSize; i++) {
		if (nums[i - 1] == nums[i])
			return true;
	}
	return false;
}


/*
ⷨ
*/
bool containsDuplicate1(int* nums, int numsSize) {
	for (int i = 1; i < numsSize; i++) {
		for (int j = 0; j < i; j++) {
			if (nums[j] == nums[i])
				return true;
		}
	}
	return false;
}

int main() {
	int nums[] = {1,2,3,1};
	containsDuplicate(nums, 4);
	return 0;
}
