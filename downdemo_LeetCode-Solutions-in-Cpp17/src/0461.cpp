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
  int hammingDistance(int x, int y) {
    int t = x ^ y;
    int res = 0;
    while (t) {
      ++res;
      t &= t - 1;
    }
    return res;
  }
};
