#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
 public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (int i = 0; i < 31; ++i) {
      res += n & 1;
      res <<= 1;
      n >>= 1;
    }
    res += n & 1;
    return res;
  }
};
