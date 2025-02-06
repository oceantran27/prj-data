#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0/

class Solution {
 public:
  int minOperations(int n) {
    if (n == 1)
      return 1;
    else if ((n & 3) == 3)
      return 1 + minOperations(n + 1);
    else if (n & 1)
      return 1 + minOperations(n - 1);
    else
      return minOperations(n >> 1);
  }
};
