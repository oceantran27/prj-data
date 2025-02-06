#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reducing-dishes

class Solution {
 public:
  int maxSatisfaction(vector<int>& ar) {
    sort(ar.begin(), ar.end(), greater<int>());

    int best = 0, cur = 0, pref = 0;
    for (int n : ar)
      if ((cur += (pref += n)) > best) best = cur;
    return best;
  }
};
