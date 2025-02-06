#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/powerful-integers

class Solution {
 public:
  vector<int> powerfulIntegers(int x, int y, int bound) {
    unordered_set<int> s;
    for (int xp = 1; xp < bound; xp *= x) {
      for (int yp = 1; xp + yp <= bound; yp *= y) {
        s.insert(xp + yp);
        if (y == 1) break;
      }
      if (x == 1) break;
    }
    vector<int> ret;
    copy(s.begin(), s.end(), back_inserter(ret));
    return ret;
  }
};
