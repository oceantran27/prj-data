#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/insert-interval

class Solution {
 public:
  vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& n) {
    vector<vector<int>> ret;
    bool flag = true;
    for (auto& p : intervals) {
      if (p[1] < n[0])
        ret.push_back(p);
      else if (p[0] > n[1]) {
        if (flag) {
          ret.push_back(n);
          flag = false;
        }
        ret.push_back(p);
      } else {
        n[0] = min(p[0], n[0]);
        n[1] = max(p[1], n[1]);
      }
    }
    if (flag) ret.push_back(n);
    return ret;
  }
};
