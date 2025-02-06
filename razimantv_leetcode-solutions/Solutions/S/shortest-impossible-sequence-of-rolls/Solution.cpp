#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/shortest-impossible-sequence-of-rolls

class Solution {
 public:
  int shortestSequence(vector<int>& rolls, int k) {
    int n = rolls.size(), done = 0;
    unordered_set<int> s;
    for (int x : rolls) {
      s.insert(x);
      if (s.size() == k) ++done, s.clear();
    }
    return done + 1;
  }
};
