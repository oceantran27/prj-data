#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> numToIndex;

    for (int i = 0; i < nums.size(); ++i) {
      if (numToIndex.count(target - nums[i]))
        return {numToIndex[target - nums[i]], i};
      numToIndex[nums[i]] = i;
    }

    throw;
    };
};