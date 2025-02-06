#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/

class Solution {
 public:
  int maxCount(vector<int>& banned, int n, int maxSum) {
    unordered_set<int> bad;
    for (int x : banned) bad.insert(x);

    int ret{};
    for (int i = 1, tot = 0; i <= n; ++i) {
      if (bad.count(i))
        continue;
      else if ((tot += i) > maxSum)
        break;
      else
        ++ret;
    }
    return ret;
  }
};
