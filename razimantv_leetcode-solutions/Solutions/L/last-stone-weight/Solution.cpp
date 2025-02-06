#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/last-stone-weight

class Solution {
 public:
  int lastStoneWeight(vector<int>& stones) {
    multiset<int, greater<int>> s;
    for (int i : stones) s.insert(i);
    while (1) {
      if (s.empty()) return 0;
      int y = *s.begin();
      s.erase(s.begin());
      if (s.empty()) return y;
      int x = *s.begin();
      s.erase(s.begin());
      if (y > x) s.insert(y - x);
    }
  }
};
