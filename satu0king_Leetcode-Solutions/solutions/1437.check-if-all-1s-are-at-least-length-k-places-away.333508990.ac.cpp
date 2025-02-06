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
  bool kLengthApart(vector<int> &nums, int k) {
    vector<int> ones;
    for (int i = 0; i < nums.size(); i++)
      if (nums[i])
        ones.push_back(i);

    for (int i = 1; i < ones.size(); i++)
      if (ones[i] - ones[i - 1] <= k)
        return false;

    return true;
  }
};
