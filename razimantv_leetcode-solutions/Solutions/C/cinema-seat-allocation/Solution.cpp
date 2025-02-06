#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/cinema-seat-allocation

class Solution {
 public:
  int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
    unordered_map<int, int> mask;
    for (const auto& v : reservedSeats) {
      int r = v[0], p = v[1];
      mask[r] |= (1 << (p - 1));
    }

    int ret = 2 * (n - mask.size());
    for (auto [k, v] : mask) {
      int m1 = 30, m2 = 120, m3 = 480;
      if (!(v & m1) and !(v & m3))
        ret += 2;
      else if (!(v & m1) or !(v & m2) or !(v & m3))
        ++ret;
    }
    return ret;
  }
};
