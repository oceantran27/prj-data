#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/bitwise-and-of-numbers-range

class Solution {
 public:
  int rangeBitwiseAnd(int m, int n) {
    int ret = 0;
    for (int i = 30; i >= 0; --i) {
      if ((m & (1 << i)) == (n & (1 << i)))
        ret |= (m & (1 << i));
      else
        break;
    }
    return ret;
  }
};
