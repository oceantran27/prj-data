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
  vector<int> findRightInterval(vector<vector<int>> &intervals) {
    map<int, int> mp;
    for (int i = 0; i < intervals.size(); i++)
      mp[intervals[i][0]] = i;

    vector<int> ans;

    for (auto v : intervals) {
      auto it = mp.lower_bound(v[1]);
      if (it == mp.end())
        ans.push_back(-1);
      else
        ans.push_back(it->second);
    }

    return ans;
  }
};
