#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks/

class Solution {
 public:
  int maximumBags(vector<int>& capacity, vector<int>& rocks, int add) {
    int n = capacity.size();
    for (int i = 0; i < n; ++i) capacity[i] -= rocks[i];
    sort(capacity.begin(), capacity.end());
    for (int i = 0; i < n; ++i)
      if (capacity[i] > add)
        return i;
      else
        add -= capacity[i];
    return n;
  }
};
