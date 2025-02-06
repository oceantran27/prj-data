#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class FreqStack {
 public:
  FreqStack() {}

  void push(int val) {
    if (cnt[val] == s.size()) s.push_back({});
    s[cnt[val]].push_back(val);
    cnt[val]++;
  }

  int pop() {
    auto& q = s.back();
    auto res = q.back();
    q.pop_back();
    if (q.empty()) s.pop_back();
    cnt[res]--;
    return res;
  }

  vector<vector<int>> s;
  unordered_map<int, int> cnt;
};