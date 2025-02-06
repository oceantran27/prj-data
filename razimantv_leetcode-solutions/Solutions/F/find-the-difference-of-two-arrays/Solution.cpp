#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-difference-of-two-arrays/

class Solution {
 public:
  vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end()),
        s2(nums2.begin(), nums2.end());
    vector<vector<int>> ret(2);
    for (int x : s1)
      if (!s2.count(x)) ret[0].push_back(x);
    for (int x : s2)
      if (!s1.count(x)) ret[1].push_back(x);
    return ret;
  }
};
