#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/merge-triplets-to-form-target-triplet

class Solution {
 public:
  bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
    vector<int> a(3);
    for (int i = 0, N = triplets.size(); i < N; ++i) {
      for (int j = 0; j < 3; ++j)
        if (triplets[i][j] > target[j]) goto BPP;
      for (int j = 0; j < 3; ++j) a[j] = max(a[j], triplets[i][j]);
    BPP:;
    }
    return a == target;
  }
};
