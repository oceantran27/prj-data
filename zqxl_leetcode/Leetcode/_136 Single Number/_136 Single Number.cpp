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

int singleNumber(int* nums, int numsSize) {
	int rs = 0;
	for (int i = 0; i < numsSize; i++) {
		rs ^= nums[i];
	}
	return rs;
}

