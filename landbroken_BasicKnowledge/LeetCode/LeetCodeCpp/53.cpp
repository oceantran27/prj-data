#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include"stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

/*
һ nums ҵһ͵飨ٰһԪأ͡

ʾ:

: [-2,1,-3,4,-1,2,1,-5,4],
: 6
:  [4,-1,2,1] ĺΪ 6
:

ѾʵָӶΪ O(n) ĽⷨʹøΪķη⡣
*/
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int n = nums.size();
		if (n <= 0)
			return 0;
		int sum = 0;
		int maxsum = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			sum += nums[i];
			if (sum > maxsum)
				maxsum = sum;
			if (sum < 0)
				sum = 0;
		}
		return maxsum;
	}
};