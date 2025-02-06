#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three

class Solution {
 public:
  bool checkPowersOfThree(int n) {
    int p = 1;
    while (p <= n) p *= 3;
    p /= 3;

    while (p) {
      if (n >= p) n -= p;
      p /= 3;
    }
    return n == 0;
  }
};
