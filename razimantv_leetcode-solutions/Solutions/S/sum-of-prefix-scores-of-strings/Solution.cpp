#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-prefix-scores-of-strings/

class Solution {
 public:
  vector<int> sumPrefixScores(vector<string>& words) {
    vector<unordered_map<int, int>> hash(1000);
    long long P = 37, mask = (1ll << 31) - 1;
    int W = words.size();
    for (auto& w : words) {
      int i = 0, cur = 0;
      for (char c : w) {
        cur = ((cur * P) + c - 'a') & mask;
        ++hash[i++][cur];
      }
    }

    vector<int> answer(W);
    for (int i = 0; i < W; ++i) {
      auto& w = words[i];
      int x = 0, cur = 0;
      for (char c : w) {
        cur = ((cur * P) + c - 'a') & mask;
        answer[i] += hash[x++][cur];
      }
    }
    return answer;
  }
};
