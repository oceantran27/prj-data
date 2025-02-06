#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-imbalance-numbers-of-all-subarrays/

class Solution {
 public:
  int sumImbalanceNumbers(vector<int>& nums) {
    int ret{};
    for (int i = 0, n = nums.size(); i < n; ++i) {
      int badcnt{};
      multimap<int, int> bad;
      for (int j = i; j < n; ++j) {
        auto mit = bad.insert({nums[j], 0});
        if (mit != bad.begin()) {
          auto mit2 = mit;
          --mit2;
          if (mit->first - mit2->first > 1) {
            mit->second = 1;
            ++badcnt;
          }
        }
        {
          auto mit2 = mit;
          ++mit2;
          if (mit2 != bad.end() and mit2->second == 1 and
              mit2->first - mit->first == 1) {
            mit2->second = 0;
            --badcnt;
          }
          if (mit2 != bad.end() and mit2->second == 0 and
              mit2->first - mit->first > 1) {
            mit2->second = 1;
            ++badcnt;
          }
        }

        ret += badcnt;
      }
    }
    return ret;
  }
};
