#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/baseball-game

class Solution {
 public:
  int calPoints(vector<string>& ops) {
    vector<int> v;
    int n = 0;
    for (const auto& s : ops) {
      if (s == "C") {
        v.pop_back();
        --n;
      } else if (s == "D") {
        v.push_back(2 * v[n - 1]);
        ++n;
      } else if (s == "+") {
        v.push_back(v[n - 1] + v[n - 2]);
        ++n;
      } else {
        v.push_back(stoi(s));
        ++n;
      }
    }
    return accumulate(v.begin(), v.end(), 0);
  }
};
