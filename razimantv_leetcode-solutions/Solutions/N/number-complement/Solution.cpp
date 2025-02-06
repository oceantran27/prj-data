#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-complement

class Solution {
 public:
  int findComplement(int num) {
    int ret = 0, bit = 1;
    while (num) {
      if ((num & 1) == 0) ret |= bit;
      bit <<= 1;
      num >>= 1;
    }
    return ret;
  }
};
