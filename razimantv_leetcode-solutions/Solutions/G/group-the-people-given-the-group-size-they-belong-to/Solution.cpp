#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/

class Solution {
public:
  vector<vector<int>> groupThePeople(vector<int> &sizes) {
    unordered_map<int, vector<int>> groups;
    vector<vector<int>> ret;
    for (int i = 0, n = sizes.size(); i < n; ++i) {
      int g = sizes[i];
      auto &group = groups[g];
      group.push_back(i);
      if (group.size() == g) {
        ret.push_back(group);
        group.clear();
      }
    }
    return ret;
  }
};
