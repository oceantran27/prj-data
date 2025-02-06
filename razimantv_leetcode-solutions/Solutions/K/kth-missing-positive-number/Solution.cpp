#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/kth-missing-positive-number

class Solution {
 public:
  int findKthPositive(vector<int>& arr, int k) {
    int n = arr.size();
    for (int i = 0; i < n; ++i)
      if (k + i < arr[i]) return k + i;
    return k + n;
  }
};
