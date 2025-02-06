#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  int lengthOfLIS(vector<int> &nums) {
    vector<int> stack;

    for (int n : nums) {
      if (stack.empty() || n > stack.back())
        stack.push_back(n);
      else
        *lower_bound(stack.begin(), stack.end(), n) = n;
    }

    return stack.size();
  }
};
