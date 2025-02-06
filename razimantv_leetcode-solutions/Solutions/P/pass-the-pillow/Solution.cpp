#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/pass-the-pillow/

class Solution {
 public:
  int passThePillow(int n, int time, int cur = 1, int dir = 1) {
    if (time == 0) return cur;
    if ((dir == 1 and cur == n) or (dir == -1 and cur == 1)) dir = -dir;
    return passThePillow(n, time - 1, cur + dir, dir);
  }
};
