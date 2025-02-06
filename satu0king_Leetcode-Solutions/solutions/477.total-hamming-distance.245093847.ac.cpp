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
  int totalHammingDistance(vector<int> &nums) {

    int ans = 0;
    int n = nums.size();

    for (int i = 0; i < 31; i++) {
      int t = 0;
      for (auto &n : nums)
        if (n & (1 << i))
          t++;
      ans += t * (n - t);
    }

    return ans;
  }
};
