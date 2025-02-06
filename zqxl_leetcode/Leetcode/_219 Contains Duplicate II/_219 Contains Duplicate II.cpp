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
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
	for (int i = 0; i < numsSize; i++) {
		for (int j = i + 1; j <= i + k && j<numsSize; j++) {
			if (nums[i] == nums[j])
				return true;
		}
	}
	return false;
}

int main() {
	int nums[] = { 1,2,3,1 };
	containsNearbyDuplicate(nums, 4);
	return 0;
}

