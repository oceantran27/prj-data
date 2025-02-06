#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-distance-value-between-two-arrays

class Solution {
 public:
  int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int ret = 0;
    for (int n1 : arr1) {
      ++ret;
      for (int n2 : arr2)
        if (abs(n1 - n2) <= d) {
          --ret;
          break;
        }
    }
    return ret;
  }
};
