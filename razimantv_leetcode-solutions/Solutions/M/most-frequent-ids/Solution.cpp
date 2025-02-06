#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/most-frequent-ids/

class Solution {
 public:
  vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
    unordered_map<int, long long> cnt;
    map<long long, int> invcnt;
    vector<long long> ret;
    int q = nums.size();
    for (int i = 0; i < q; ++i) {
      int x = nums[i];
      long long f = freq[i], f0 = cnt[x];
      if (f0 and !--invcnt[-f0]) invcnt.erase(-f0);
      ++invcnt[-(cnt[x] += f)];
      ret.push_back(-invcnt.begin()->first);
    }
    return ret;
  }
};
