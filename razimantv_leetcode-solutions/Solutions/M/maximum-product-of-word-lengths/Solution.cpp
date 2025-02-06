#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-product-of-word-lengths

class Solution {
 public:
  int maxProduct(vector<string>& words) {
    int N = words.size(), best = 0;
    vector<int> mask(N);
    for (int i = 0; i < N; ++i)
      for (char c : words[i]) mask[i] |= (1 << (c - 'a'));
    for (int i = 0; i < N; ++i)
      for (int j = 0; j < i; ++j)
        if ((mask[i] & mask[j]) == 0)
          best = max(best, (int)(words[i].size() * words[j].size()));
    return best;
  }
};
