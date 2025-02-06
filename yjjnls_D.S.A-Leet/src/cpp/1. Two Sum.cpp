#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
#include <common.hpp>
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> cache;
        for (int i = 0; i < nums.size(); ++i)
        {
            //O(1), if use map, O(logN)
            if (cache.find(target - nums[i]) != cache.end())
            {
                return std::vector<int>{cache[target - nums[i]], i};
            }
            else
            {
                cache[nums[i]] = i;
            }
        }
        return std::vector<int>{-1, -1};
    }
};

//time: O(N)
//space: O(N)

//highest time requirements: n sum->O(N^(n-1))

//extension
/*
If there are duplicated elements, cache will be overwritten when scanned 
the same element in different positions. [3,2,2,4]->cache[2]=1->cache[2]=2
If output is the value, it's OK! while if it is index, it will be wrong;
*/
#ifdef USE_GTEST
TEST(DSA, 1_Two_Sum)
{
    vector<int> nums = {2, 7, 11, 15};
    Solution s;
    vector<int> res = s.twoSum(nums, 13);
    vector<int> result = {0, 2};
    for (int i = 0; i < 2; ++i)
        ASSERT_TRUE(res[i] == result[i]);
}
#endif