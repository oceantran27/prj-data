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

int rob1(int* nums, int numsSize) {
	int max1 = 0, max2=0;
	for (int i = 0; i < numsSize; i += 2) {
		max1 += nums[i];
	}
	for (int i = 1; i < numsSize; i += 2) {
		max2 += nums[i];
	}

	return max1 > max2 ? max1 : max2;
}

int max(int x, int y) { return x > y ? x : y; }
int rob(int* nums, int numsSize) {
	if (numsSize == 0) {
		return 0;
	}
	// memo[i] ʾ nums[i...numsSize-1] ܻ棨˵һ i ʼ٣
	int *memo = (int*)malloc(sizeof(int)*numsSize);
	// ȿ򵥵
	memo[numsSize - 1] = nums[numsSize - 1];
	for (int i = numsSize - 2; i >= 0; i--) {
		// memo[i] ȡֵڿ i ŷӺͲ֮ȡֵ
		memo[i] = max(nums[i] + (i + 2 >= numsSize ? 0 : memo[i + 2]), nums[i + 1] + (i + 3 >= numsSize ? 0 : memo[i + 3]));
	}
	return memo[0];
}
