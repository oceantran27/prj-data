#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-days-to-eat-n-oranges

class Solution {
 public:
  static unordered_map<int, int> cache;
  int minDays(int n) {
    if (n < 3)
      return n;
    else if (cache.count(n))
      return cache[n];
    else
      return cache[n] = 1 + min(n % 2 + minDays(n / 2), n % 3 + minDays(n / 3));
  }
};

unordered_map<int, int> Solution::cache = {};
