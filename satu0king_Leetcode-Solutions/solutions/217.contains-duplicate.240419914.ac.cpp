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
  bool containsDuplicate(vector<int> &nums) {
    set<int> mp;
    for (auto num : nums)
      if (mp.find(num) == mp.end())
        mp.insert(num);
      else
        return true;
    return false;
  }
};
