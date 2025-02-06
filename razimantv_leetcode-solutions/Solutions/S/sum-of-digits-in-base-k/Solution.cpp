#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-digits-in-base-k

class Solution {
 public:
  int sumBase(int n, int k) {
    int ret = 0;
    while (n) {
      ret += n % k;
      n /= k;
    }
    return ret;
  }
};
