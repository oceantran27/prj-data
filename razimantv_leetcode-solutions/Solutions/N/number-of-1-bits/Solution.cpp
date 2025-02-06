#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-1-bits

class Solution {
 public:
  int hammingWeight(uint32_t n) { return __builtin_popcount(n); }
};
