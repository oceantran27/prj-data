#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sort-array-by-increasing-frequency

class Solution {
 public:
  vector<int> frequencySort(vector<int>& nums) {
    unordered_map<int, int> cnt;
    for (int n : nums) ++cnt[n];
    auto cmp = [&](int a, int b) {
      if (cnt[a] != cnt[b]) return cnt[a] < cnt[b];
      return a > b;
    };
    sort(nums.begin(), nums.end(), cmp);
    return nums;
  }
};
