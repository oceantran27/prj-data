#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <stdio.h>
#include "malloc.h"


//ֱϴеĴ
/*
˼·ǽһmap飬mapԪnumsӦԪص±꣬map±Ϊ
numsԪnumsСֵĲ
ԭΪnumsСֱֵʹ0ǿǵ
*/
int* twoSum(int* nums, int numsSize, int target) {
	int i, min = nums[0], max = nums[0];
	//ҳֵСֵ
	for (i = 0; i < numsSize; i++) {
		if (nums[i] > max) max = nums[i];
		if (nums[i] < min) min = nums[i];
	}
	//Ϊmap±Ϊ룬mapĴСΪ+1ɡ
	int *map = (int*)calloc((max - min + 1), sizeof(int));
	int *twosum = (int*)malloc(sizeof(int) * 2);
	// ÿɨһnumsԪأԪص±;¼map
	for (i = 0; i < numsSize; map[nums[i] - min] = ++i) {
		int lookfornum = target - nums[i];
		if (lookfornum<min || lookfornum>max)
			continue;
		int dis = lookfornum - min;
		// жĿǷѾֵ
		if (map[dis] != 0) {
			twosum[0] = i;
			twosum[1] = map[dis] - 1;
			break;
		}
	}

	return twosum;
}