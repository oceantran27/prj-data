#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sort-the-people/

class Solution {
 public:
  vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    vector<pair<int, string>> temp;
    int n = names.size();
    for (int i = 0; i < n; ++i) temp.push_back({-heights[i], names[i]});
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; ++i) names[i] = temp[i].second;
    return names;
  }
};
