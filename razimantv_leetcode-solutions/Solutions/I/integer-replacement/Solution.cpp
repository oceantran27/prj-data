#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/integer-replacement

class Solution {
 public:
  int integerReplacement(int n) {
    if (n < 3)
      return n - 1;
    else if (n & 1)
      return min(integerReplacement(n >> 1), integerReplacement((n >> 1) + 1)) +
             2;
    else
      return integerReplacement(n >> 1) + 1;
  }
};
