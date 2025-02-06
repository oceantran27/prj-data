#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-frequency-stack

class FreqStack {
 public:
  unordered_map<int, int> freq;
  set<tuple<int, int, int>, greater<tuple<int, int, int>>> best;
  int i;

  FreqStack() {}

  void push(int x) { best.insert({++freq[x], ++i, x}); }

  int pop() {
    auto [f, p, v] = *best.begin();
    best.erase(best.begin());
    --freq[v];
    return v;
  }
};

