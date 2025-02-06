#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/factorial-trailing-zeroes

class Solution {
 public:
  int trailingZeroes(int n) {
    int ret = 0;
    while (n /= 5) ret += n;
    return ret;
  }
};
