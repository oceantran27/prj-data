#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/

class Solution {
 public:
  int numberOfCuts(int n) {
    if (n == 1)
      return 0;
    else if (n & 1)
      return n;
    else
      return n / 2;
  }
};
