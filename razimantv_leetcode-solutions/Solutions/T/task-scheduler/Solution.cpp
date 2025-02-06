#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/task-scheduler

class Solution {
 public:
  int leastInterval(vector<char>& tasks, int n) {
    ++n;
    int cnt[26] = {0};
    for (auto c : tasks) cnt[c - 'A']++;
    map<int, int> cnt2;
    for (int i = 0; i < 26; ++i) cnt2[cnt[i]]++;

    int L = cnt2.rbegin()->first, M = min(cnt2.rbegin()->second, n);
    return max((int)tasks.size(), n * (L - 1) + M);
  }
};
