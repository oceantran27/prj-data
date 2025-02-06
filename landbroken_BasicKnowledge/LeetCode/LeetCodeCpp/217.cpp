#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
using namespace std;

/*
һ飬жǷظԪء

κֵгΣ trueÿԪضͬ򷵻 false

ʾ 1:

: [1,2,3,1]
: true
ʾ 2:

: [1,2,3,4]
: false
ʾ 3:

: [1,1,1,3,3,4,3,2,4,2]
: true
*/
class Solution {
public:
	bool method_1(vector<int>& nums)
	{
		set<int> s;
		for (auto &it : nums)
		{
			if (s.find(it) == s.end())
			{
				s.insert(it);
			}
			else
			{
				return true;
			}
		}
		return false;
	}

	bool method_2(vector<int>& nums)
	{
		if (nums.size() <= 1)
		{
			return false;
		}

		sort(nums.begin(), nums.end());
		for (int i = 0;i<nums.size() - 1;i++)
		{
			if (nums[i] == nums[i + 1])
			{
				return true;
			}
		}
		return false;
	}

	bool containsDuplicate(vector<int>& nums) {
		return method_2(nums);
	}
};