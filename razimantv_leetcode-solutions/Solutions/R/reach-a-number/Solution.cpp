#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reach-a-number

class Solution {
 public:
  int reachNumber(int target) {
    if (target < 0) target = -target;
    int ret = 0, tot = 0;
    while (tot < target or ((tot - target) & 1)) tot += ++ret;
    return ret;
  }
};
