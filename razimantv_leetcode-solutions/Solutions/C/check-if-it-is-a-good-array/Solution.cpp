#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-it-is-a-good-array

class Solution {
 public:
  bool isGoodArray(vector<int>& nums) {
    int g = 0;
    for (int n : nums)
      if ((g = __gcd(g, n)) == 1) return true;
    return false;
  }
};
