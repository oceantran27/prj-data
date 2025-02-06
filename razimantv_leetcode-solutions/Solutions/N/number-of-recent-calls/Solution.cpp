#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-recent-calls

class RecentCounter {
  queue<int> q;

 public:
  RecentCounter() {}

  int ping(int t) {
    q.push(t);
    while (!q.empty()) {
      int f = q.front();
      if (t - f > 3000)
        q.pop();
      else
        break;
    }
    return q.size();
  }
};

