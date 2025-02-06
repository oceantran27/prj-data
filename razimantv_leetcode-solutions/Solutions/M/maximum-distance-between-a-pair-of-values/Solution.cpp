#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-distance-between-a-pair-of-values

class Solution {
 public:
  int maxDistance(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), best = 0;
    for (int i = 0; i < m; ++i) {
      int x =
          upper_bound(nums2.begin(), nums2.end(), nums1[i], greater<int>()) -
          nums2.begin();
      best = max(best, x - i - 1);
    }
    return best;
  }
};
