#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/relocate-marbles/

class Solution {
 public:
  vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom,
                              vector<int>& moveTo) {
    set<int> pos(nums.begin(), nums.end());
    for (int i = 0, n = moveFrom.size(); i < n; ++i) {
      pos.erase(moveFrom[i]);
      pos.insert(moveTo[i]);
    }
    return vector<int>(pos.begin(), pos.end());
  }
};
