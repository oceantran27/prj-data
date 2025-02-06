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
#include<memory>
// ʱ O(N2)
int findMaxLength1(int* nums, int numsSize) {
	int diff = 0, maxLength = 0;
	for (int start = 0; start < numsSize; start++) {
		diff = 0;
		for (int i = start; i < numsSize; i++) {
			diff += (nums[i] == 1 ? 1 : -1);
			if (diff == 0) {
				int length = i - start + 1;
				maxLength = length > maxLength ? length : maxLength;
			}
		}
	}
	return maxLength;
}

/*
Ľ
ÿһƽλÿʼû
*/
int findMaxLength2(int* nums, int numsSize) {
	int diff = 0, maxLength = 0;
	for (int start = 0; start < numsSize; start++) {
		int iStart = start;
		if (maxLength) {
			diff = (nums[start - 1] == 0 ? 1 : -1);
			iStart = start + maxLength - 1;
		}
		else {
			diff = 0;
		}
		for (int i = iStart; i < numsSize; i++) {
			diff += (nums[i] == 1 ? 1 : -1);
			if (diff == 0) {
				maxLength += i - iStart + 1;
			}
		}
	}
	return maxLength;
}

/*
ǰ׺
https://www.cnblogs.com/geek1116/p/9389236.html
ִʱ : 72 ms, Contiguous ArrayCύл100.00% û
ڴ : 17.3 MB, Contiguous ArrayCύл80.00% û
*/
int findMaxLength(int* nums, int numsSize) {
	int *sumMap = (int*)calloc(2*numsSize+1, sizeof(int));
	for(int i=0;i<2 * numsSize + 1;i++){
		sumMap[i] = numsSize + 1;
	}
	sumMap[0 + numsSize] = -1;

	int sum = 0, maxLength = 0;
	for (int i = 0; i < numsSize; i++) {
		sum += (nums[i] == 1 ? 1 : -1);
		if (sumMap[sum + numsSize] == numsSize + 1) {
			sumMap[sum + numsSize] = i;
		}
		else {
			int curLength = i - sumMap[sum + numsSize];
			maxLength = maxLength > curLength ? maxLength : curLength;
		}
	}

	return maxLength;
}

int main() {
	int nums[] = {0,0,1};
	findMaxLength(nums, sizeof(nums) / sizeof(int));
	return 0;
}