#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging

class Solution {
 public:
  int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    for (int i = 0, cur = 1, n = arr.size(); i < n; ++i) {
      arr[i] = min(arr[i], cur);
      cur = arr[i] + 1;
    }
    return arr.back();
  }
};
