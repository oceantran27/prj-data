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
  bool containsNearbyDuplicate(vector<int> &nums, int k) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
      if (mp.find(nums[i]) != mp.end())
        if (i - mp[nums[i]] <= k)
          return true;
      mp[nums[i]] = i;
    }
    return false;
  }
};
