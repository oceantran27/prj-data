#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

int missingNumber(int* nums, int numsSize) {
	int sum = 0;
	for (int i = 0; i<numsSize; i++) {
		sum += nums[i];
	}
	return (numsSize + 1)*numsSize / 2 - sum;
}

int missingNumber(int* nums, int numsSize) {
	int i = 0;
	int sum = 0;
	sum = numsSize;
	for (i = 0; i < numsSize; i++) {
		sum ^= nums[i];
		sum ^= i;
	}
	return sum;
}