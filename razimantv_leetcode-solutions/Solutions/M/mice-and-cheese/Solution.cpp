#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/mice-and-cheese/

class Solution {
 public:
  int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
    int ret = accumulate(reward2.begin(), reward2.end(), 0);
    for (int i = 0, n = reward1.size(); i < n; ++i) reward2[i] -= reward1[i];
    nth_element(reward2.begin(), reward2.begin() + k, reward2.end());
    return ret - accumulate(reward2.begin(), reward2.begin() + k, 0);
  }
};
