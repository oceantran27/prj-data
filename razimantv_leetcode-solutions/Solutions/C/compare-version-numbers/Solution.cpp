#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/compare-version-numbers

class Solution {
 public:
  int compareVersion(string v1, string v2) {
    int p1 = 0, p2 = 0;
    while (1) {
      int i1 = 0, i2 = 0;
      while (p1 < v1.size() and v1[p1] != '.') i1 = i1 * 10 + v1[p1++] - '0';
      p1++;
      while (p2 < v2.size() and v2[p2] != '.') i2 = i2 * 10 + v2[p2++] - '0';
      p2++;
      if (i1 < i2)
        return -1;
      else if (i1 > i2)
        return 1;
      if (p1 >= v1.size() and p2 >= v2.size()) break;
    }
    return 0;
  }
};
