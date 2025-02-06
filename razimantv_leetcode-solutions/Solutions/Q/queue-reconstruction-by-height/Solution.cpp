#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/queue-reconstruction-by-height

class Solution {
 public:
  vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    vector<vector<int>> ret;
    while (!people.empty()) {
      int best = -1;
      for (int i = 0; i < people.size(); ++i) {
        if (people[i][1] != 0) continue;
        if (best == -1 or people[i][0] < people[best][0]) best = i;
      }
      swap(people[best], people.back());
      auto cur = people.back();
      people.pop_back();
      for (auto& p : people)
        if (p[0] <= cur[0]) p[1]--;
      for (auto& p : ret)
        if (p[0] >= cur[0]) cur[1]++;
      ret.push_back(cur);
    }
    return ret;
  }
};
