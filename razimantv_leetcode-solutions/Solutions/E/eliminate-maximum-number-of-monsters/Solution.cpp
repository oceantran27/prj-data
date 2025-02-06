#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/eliminate-maximum-number-of-monsters

class Solution {
 public:
  int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
    int N = dist.size();
    for (int i = 0; i < N; ++i) dist[i] = (dist[i] + speed[i] - 1) / speed[i];
    sort(dist.begin(), dist.end());

    int ret = 0;
    for (int i = 0; i < N; ++i)
      if (dist[i] <= i)
        break;
      else
        ++ret;
    return ret;
  }
};
