#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/delete-and-earn

class Solution {
 public:
  int deleteAndEarn(vector<int>& nums) {
    unordered_map<int, int> m;
    for (int x : nums) m[x] += x;
    for (int x = 1; x <= 10000; ++x) m[x] = max(m[x] + m[x - 2], m[x - 1]);
    return m[10000];
  }
};
