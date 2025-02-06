#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/can-place-flowers

class Solution {
 public:
  bool canPlaceFlowers(vector<int>& fb, int n) {
    for (int i = 0, N = fb.size(); n and i < N; ++i) {
      if (!fb[i] and (!i or !fb[i - 1]) and (i == N - 1 or !fb[i + 1]))
        --n, ++fb[i];
    }
    return !n;
  }
};
