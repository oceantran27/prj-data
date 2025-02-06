#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/robot-bounded-in-circle

class Solution {
 public:
  bool isRobotBounded(string in) {
    vector<vector<int>> dr{{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    int x = 0, y = 0, d = 0;
    for (char c : in) {
      if (c == 'G')
        x += dr[d][0], y += dr[d][1];
      else if (c == 'L')
        d = (d + 1) % 4;
      else
        d = (d + 3) % 4;
    }
    return d or (x == 0 and y == 0);
  }
};
