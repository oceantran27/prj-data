#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sqrtx

class Solution {
 public:
  int mySqrt(int x) {
    long long start = 0, end = x + 1ll;
    while (end - start > 1) {
      long long mid = (start + end) >> 1;
      ((mid * mid <= x) ? start : end) = mid;
    }
    return start;
  }
};
