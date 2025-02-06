#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/champagne-tower

class Solution {
 public:
  double champagneTower(int poured, int query_row, int query_glass) {
    vector<double> state(query_row + 1);
    state[0] = poured;
    for (int i = 0; i < query_row; ++i)
      for (int j = i; j >= 0; --j) {
        state[j] = max(0., state[j] - 1);
        state[j + 1] += state[j] /= 2;
      }
    return min(1., state[query_glass]);
  }
};
