#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-mountain-in-array

class Solution {
 public:
  int longestMountain(vector<int>& arr) {
    const int none = 0, up = 1, down = 2;

    int best = 0;
    for (int i = 1, n = arr.size(), status = none, start = -1; i < n; ++i) {
      if (arr[i] > arr[i - 1] and status != up)
        status = up, start = i - 1;
      else if (arr[i] < arr[i - 1] and status != none)
        status = down, best = max(best, i - start + 1);
      else if (arr[i] == arr[i - 1])
        status = none;
    }
    return best;
  }
};
