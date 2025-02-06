#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    // number -> index in array
    unordered_map<int, int> numberMap; // hash table in c++

    for (int i = 0; i < nums.size(); i++) {
      if (numberMap.count(target - nums[i])) {
        return {numberMap[target - nums[i]], i};
      }
      numberMap[nums[i]] = i;
    }

    return {};
  }
};
