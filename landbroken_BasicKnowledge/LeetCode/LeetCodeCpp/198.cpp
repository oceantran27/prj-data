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
#include<algorithm>
using namespace std;
/*
һרҵС͵ƻ͵ؽֵķݡÿ䷿ڶһֽӰ͵ԵΨһԼؾڵķװ໥ͨķϵͳڵķͬһϱС͵룬ϵͳԶ

һÿݴŽķǸ飬ڲװõ£ܹ͵Ե߽

ʾ 1:

: [1,2,3,1]
: 4
: ͵ 1 ŷ ( = 1) Ȼ͵ 3 ŷ ( = 3)
͵Ե߽ = 1 + 3 = 4 
ʾ 2:

: [2,7,9,3,1]
: 12
: ͵ 1 ŷ ( = 2), ͵ 3 ŷ ( = 9)͵ 5 ŷ ( = 1)
͵Ե߽ = 2 + 9 + 1 = 12 
*/
class Solution {
public:
	int rob(vector<int>& nums) {
		if (nums.size() <= 1)
			return nums.empty() ? 0 : nums[0];

		vector<int> dp = { nums[0], max(nums[0], nums[1]) };
		for (int i = 2; i < nums.size(); ++i)
		{
			dp.push_back(max(nums[i] + dp[i - 2], dp[i - 1]));
		}
		return dp.back();
	}
};