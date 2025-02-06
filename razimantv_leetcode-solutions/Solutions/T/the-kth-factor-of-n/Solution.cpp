#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/the-kth-factor-of-n

class Solution {
 public:
  int kthFactor(int n, int k) {
    for (int i = 1; i <= n; ++i)
      if (n % i == 0 and --k == 0) return i;
    return -1;
  }
};
