#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/task-scheduler-ii

class Solution {
 public:
  long long taskSchedulerII(vector<int>& tasks, int space) {
    unordered_map<int, long long> m;
    long long t = 0;
    for (int x : tasks) {
      t = max(t + 1, m[x]);
      m[x] = t + space + 1;
    }
    return t;
  }
};
