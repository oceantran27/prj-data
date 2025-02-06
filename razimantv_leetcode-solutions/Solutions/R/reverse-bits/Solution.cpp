#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-bits

class Solution {
 public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t ret = 0, o = 1;
    for (int i = 0; i < 32; i++)
      if (n & (o << i)) ret |= (o << (31 - i));
    return ret;
  }
};
