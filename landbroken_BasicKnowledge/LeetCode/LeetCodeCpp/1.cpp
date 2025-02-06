#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
һһĿֵҳкΪĿֵ

ԼÿֻӦһִ𰸣ͬԪزܱظá

ʾ:

 nums = [2, 7, 11, 15], target = 9

Ϊ nums[0] + nums[1] = 2 + 7 = 9
Է [0, 1]
*/
class Solution {
public:
	/*
	ҪO(n^2)ʱ䣬O(1)Ķռ
	*/
	vector<int> method_1(vector<int>& nums, int target)
	{
		vector<int> ret;
		for (int i = 0;i<nums.size();i++)
		{
			for (int j = i + 1;j<nums.size();j++)
			{
				if (nums[i] + nums[j] == target)
				{
					ret.push_back(i);
					ret.push_back(j);
					return ret;
				}
			}
		}
		return ret;
	}

	/*
	ùϣҪO(n)ʱO(n)Ŀռ
	ο
	https://www.cnblogs.com/eudiwffe/p/6282635.html
	*/
	vector<int> method_2(vector<int>& nums, int target)
	{
		vector<int> v(2, 0);
		// val+id
		unordered_map<int, int> hash;
		// we can search num and insert it to hash map at same time
		// and current num must be not in hash map
		for (int i = nums.size(); i--; hash[nums[i]] = i)
		{
			if (hash.find(target - nums[i]) == hash.end())
				continue;

			v[0] = i;           // the index from 0 to n-1
			v[1] = hash[target - nums[i]];
			return v;
		}

		return v;                   // no answer return {0,0}
	}

	vector<int> twoSum(vector<int>& nums, int target) {
		return method_2(nums, target);
	}
};

vector<int> test_1(vector<int>& nums, int target)
{
	Solution s;
	return s.twoSum(nums, target);
}