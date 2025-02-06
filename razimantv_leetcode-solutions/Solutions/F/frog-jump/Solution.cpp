#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/frog-jump/

class Solution {
 public:
  // ChatGPT solution : Modified
  bool canCross(vector<int>& stones) {
    int n = stones.size();

    // Create a map to store the possible jump distances for each stone
    unordered_map<int, unordered_set<long long>> jumpMap;

    // Initialize the jumpMap with the first stone
    jumpMap[0].insert(0);

    for (int i = 1; i < n; ++i) {
      for (int j = i - 1; j >= 0; --j) {
        long long diff = stones[i] - stones[j];

        if (jumpMap[j].count(diff) || jumpMap[j].count(diff - 1) ||
            jumpMap[j].count(diff + 1)) {
          jumpMap[i].insert(diff);
        }
      }
    }

    // If the last stone has any jump possibilities, the frog can cross
    return !jumpMap[n - 1].empty();
  }
};
