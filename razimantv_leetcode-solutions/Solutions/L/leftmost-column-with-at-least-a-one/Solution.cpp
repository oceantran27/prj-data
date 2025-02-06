#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/leftmost-column-with-at-least-a-one

class Solution {
 public:
  int leftMostColumnWithOne(BinaryMatrix &b) {
    auto dim = b.dimensions();
    int r = dim[0], c = dim[1];
    int ret = c - 1;
    for (int i = 0; i < r; ++i) {
      for (; ret >= 0 and b.get(i, ret); ret--)
        ;
    }
    if (ret + 1 == c) return -1;
    return ret + 1;
  }
};
