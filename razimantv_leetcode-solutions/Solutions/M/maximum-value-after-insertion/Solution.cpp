#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-value-after-insertion

class Solution {
 public:
  string maxValue(string n, int x) {
    int N = n.size();
    if (n[0] == '-') {
      for (int i = 1; i < N; ++i) {
        if (n[i] - '0' > x)
          return n.substr(0, i) + ((char)('0' + x)) + n.substr(i);
      }
    } else {
      for (int i = 0; i < N; ++i) {
        if (n[i] - '0' < x)
          return n.substr(0, i) + ((char)('0' + x)) + n.substr(i);
      }
    }
    return n + (char)(x + '0');
  }
};
