#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/triples-with-bitwise-and-equal-to-zero

class Solution {
 public:
  int countTriplets(vector<int>& nums) {
    int two[1 << 16]{};
    for (int x : nums)
      for (int y : nums) ++two[x & y];
    int ret = 0;
    for (int x : nums)
      for (int y = 0; y < (1 << 16); ++y)
        if (!(x & y)) ret += two[y];
    return ret;
  }
};
