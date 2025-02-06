#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/single-number-iii

class Solution {
 public:
  vector<int> singleNumber(vector<int>& nums) {
    unordered_set<int> s;
    for (int n : nums) {
      if (s.count(n))
        s.erase(n);
      else
        s.insert(n);
    }
    vector<int> ret;
    for (int n : s) ret.push_back(n);
    return ret;
  }
};
