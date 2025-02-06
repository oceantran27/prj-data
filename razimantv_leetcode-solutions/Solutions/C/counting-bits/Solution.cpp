#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/counting-bits

class Solution {
 public:
  vector<int> countBits(int num) {
    vector<int> ret(num + 1);
    for (int i = 1; i <= num; ++i) {
      ret[i] = ((i & 1) ? ret[i - 1] + 1 : ret[i >> 1]);
    }
    return ret;
  }
};
