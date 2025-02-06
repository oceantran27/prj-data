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
  int maxSubArray(vector<int> &nums) {
    int ans = INT_MIN;
    int mn = 0;
    int cumSum = 0;
    for (int n : nums) {
      cumSum += n;
      ans = max(ans, cumSum - mn);
      mn = min(mn, cumSum);
    }
    return ans;
  }
};
