#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

class Solution {
 public:
  // ChatGPT solution
  bool canMakeArithmeticProgression(vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
    int diff = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); i++) {
      if (arr[i] - arr[i - 1] != diff) {
        return false;
      }
    }
    return true;
  }
};
