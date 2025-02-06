#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/employee-importance


class Solution {
 public:
  unordered_map<int, Employee*> danger;

  int dfs(Employee* e) {
    int cur = e->importance;
    for (int s : e->subordinates) cur += dfs(danger[s]);
    return cur;
  }
  int getImportance(vector<Employee*> employees, int id) {
    for (auto e : employees) danger[e->id] = e;
    return dfs(danger[id]);
  }
};
