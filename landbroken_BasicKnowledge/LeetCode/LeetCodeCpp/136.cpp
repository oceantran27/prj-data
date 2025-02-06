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
һǿ飬ĳԪֻһ⣬ÿԪؾΡҳǸֻһεԪء

˵

㷨Ӧþʱ临Ӷȡ Բʹöռʵ

ʾ 1:

: [2,2,1]
: 1
ʾ 2:

: [4,1,2,1,2]
: 4
*/
class Solution {
public:
	int method_1(vector<int>& nums)
	{
		if (nums.size() == 1)
		{
			return nums[0];
		}

		sort(nums.begin(), nums.end());
		for (int i = 0;i<nums.size() - 1;)
		{
			if (nums[i] == nums[i + 1])
			{
				i += 2;
			}
			else
			{
				//2Σi=0i=1һһ
				if (i == 0)
				{
					return nums[i];
				}
				//һҲһ
				else if (nums[i] != nums[i - 1])
				{
					return nums[i];
				}
				else
				{
					i++;
				}
			}
		}
		//ǰnums.size()-1
		//ôһǵ
		return nums[nums.size() - 1];
	}

	int method_2(vector<int>& nums)
	{
		int result = nums[0];
		for (int i = 1; i < nums.size(); i++)
		{
			result = result ^ nums[i];
		}

		return result;
	}

	int singleNumber(vector<int>& nums) {
		return method_2(nums);
	}
};