#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/valid-mountain-array

class Solution {
 public:
  bool validMountainArray(vector<int>& arr) {
    bool u{0}, d{0};
    for (int i = 1, n = arr.size(); i < n; ++i) {
      if (arr[i] > arr[i - 1]) {
        if (!d)
          u = true;
        else
          return false;
      } else if (arr[i] < arr[i - 1]) {
        if (u)
          d = true;
        else
          return false;
      } else
        return false;
    }
    return u && d;
  }
};
