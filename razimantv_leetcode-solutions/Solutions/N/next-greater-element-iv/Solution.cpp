#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/next-greater-element-iv/

class Solution {
 public:
  vector<int> secondGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(), idx.end(), [&](int a, int b) {
      if (nums[a] != nums[b]) return nums[a] > nums[b];
      return a < b;
    });

    int base = 1;
    while (base < n) base <<= 1;
    vector<int> seg(base << 1);

    vector<int> ret(n);
    for (int x : idx) {
      int cur = 1;
      for (int node = base + x; node; node >>= 1) {
        ++seg[node];
        if (node & 1) cur += seg[node ^ 1];
      }

      cur += 2;
      if (seg[1] < cur) {
        ret[x] = -1;
        continue;
      }

      for (int node = 1;;) {
        if (node >= base) {
          ret[x] = nums[node - base];
          break;
        }
        if (seg[node << 1] >= cur)
          node <<= 1;
        else
          cur -= seg[node << 1], node = (node << 1) | 1;
      }
    }

    return ret;
  }
};
