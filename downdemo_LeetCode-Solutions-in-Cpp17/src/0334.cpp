#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
 public:
  bool increasingTriplet(vector<int>& nums) {
    int small = INT_MAX;
    int mid = INT_MAX;
    for (auto& x : nums) {
      if (x <= small) {
        small = x;
      } else if (x <= mid) {
        mid = x;
      } else {
        return true;
      }
    }
    return false;
  }
};
