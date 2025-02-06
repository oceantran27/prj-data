#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reward-top-k-students/

class Solution {
 public:
  vector<int> topStudents(vector<string>& positive, vector<string>& negative,
                          vector<string>& report, vector<int>& student_id,
                          int k) {
    unordered_set<string> good, bad;
    for (auto& s : positive) good.insert(s);
    for (auto& s : negative) bad.insert(s);

    int n = report.size();
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i) {
      istringstream iss(report[i]);
      string cur;
      int val{};
      while (iss >> cur)
        if (good.count(cur))
          val -= 3;
        else if (bad.count(cur))
          val += 1;
      vec.push_back({val, student_id[i]});
    }
    sort(vec.begin(), vec.end());
    vector<int> ret;
    for (int i = 0; i < k; ++i) ret.push_back(vec[i].second);
    return ret;
  }
};
