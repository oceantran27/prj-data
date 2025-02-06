#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-point-is-reachable/

class Solution {
 public:
  bool isReachable(int x, int y) {
    if (x > y) swap(x, y);
    if (!x) return !(y & (y - 1));

    int g = __gcd(x, y);
    if (g & (g - 1)) return false;
    return true;
  }
};
