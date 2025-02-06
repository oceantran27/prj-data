#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-make-array-equal-ii/

class Solution {
 public:
  long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
    if (!k) return nums1 == nums2 ? 0 : -1;

    long long d1{}, d2{};
    int n = nums1.size();
    for (int i = 0; i < n; ++i) {
      int x = nums1[i] - nums2[i];
      if (x % k)
        return -1;
      else if (x > 0)
        d1 += x / k;
      else
        d2 -= x / k;
    }

    return d1 == d2 ? d1 : -1;
  }
};
