#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
 public:
  int arraySign(vector<int>& nums) {
    int sgn = 1;
    for (int n : nums) {
      if (n == 0)
        return 0;
      else if (n < 0)
        sgn = -sgn;
    }

    return sgn;
  }
};
