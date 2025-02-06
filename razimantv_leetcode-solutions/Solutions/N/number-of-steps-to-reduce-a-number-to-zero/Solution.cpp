#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

class Solution {
 public:
  int numberOfSteps(int num) {
    if (num == 0)
      return 0;
    else if (num & 1)
      return 1 + numberOfSteps(num - 1);
    else
      return 1 + numberOfSteps(num / 2);
  }
};
