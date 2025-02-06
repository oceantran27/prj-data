#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/power-of-two

class Solution {
 public:
  bool isPowerOfTwo(int n) { return n > 0 and !(n & (n - 1)); }
};
