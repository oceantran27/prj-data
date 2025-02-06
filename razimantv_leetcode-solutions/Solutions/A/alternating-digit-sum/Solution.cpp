#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/alternating-digit-sum/

class Solution {
 public:
  int alternateDigitSum(int n) {
    int ret{};
    while (n) ret = n % 10 - ret, n /= 10;
    return ret;
  }
};
