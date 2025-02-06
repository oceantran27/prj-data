#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-of-smaller-numbers-after-self

class Solution {
 public:
  vector<int> countSmaller(vector<int>& nums) {
    int l = *min_element(nums.begin(), nums.end()),
        r = *max_element(nums.begin(), nums.end());
    int n = r - l + 2, base = 1;
    while (base < n) base <<= 1;

    int m = nums.size();
    vector<int> seg(base << 1), ret(m);
    for (int i = m - 1; i >= 0; --i) {
      for (int pos = nums[i] - l + base + 1; pos; pos >>= 1) {
        ++seg[pos];
        if (pos & 1) ret[i] += seg[pos ^ 1];
      }
    }
    return ret;
  }
};
