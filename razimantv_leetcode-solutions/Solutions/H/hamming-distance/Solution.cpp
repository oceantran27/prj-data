#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/hamming-distance

class Solution {
 public:
  int hammingDistance(int x, int y) { return __builtin_popcount(x ^ y); }
};
