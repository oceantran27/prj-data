#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/query-kth-smallest-trimmed-number

class Solution {
 public:
  vector<int> smallestTrimmedNumbers(vector<string>& nums,
                                     vector<vector<int>>& queries) {
    int L = nums[0].size(), N = nums.size(), Q = queries.size();
    vector<int> wut(N);
    iota(wut.begin(), wut.end(), 0);
    vector<vector<int>> all{wut};

    for (int i = 0; i < L; ++i) {
      all.push_back(all.back());
      stable_sort(all.back().begin(), all.back().end(), [&](int a, int b) {
        return nums[a][L - 1 - i] < nums[b][L - 1 - i];
      });
    }

    vector<int> ret(Q);
    for (int i = 0; i < Q; ++i) ret[i] = all[queries[i][1]][queries[i][0] - 1];
    return ret;
  }
};
