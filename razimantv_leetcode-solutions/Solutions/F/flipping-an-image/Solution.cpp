#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/flipping-an-image

class Solution {
 public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    for (auto& r : A) {
      reverse(r.begin(), r.end());
      for (int& x : r) x ^= 1;
    }
    return A;
  }
};
