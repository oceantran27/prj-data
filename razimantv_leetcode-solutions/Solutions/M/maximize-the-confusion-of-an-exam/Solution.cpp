#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

class Solution {
 public:
  int maxConsecutiveAnswers(string answerKey, int k) {
    int best{};
    for (int l = 0, r = 0, n = answerKey.size(), T = 0, F = 0; r < n; ++r) {
      ++(answerKey[r] == 'T' ? T : F);
      while (min(T, F) > k) --(answerKey[l++] == 'T' ? T : F);
      best = max(best, r - l + 1);
    }
    return best;
  }
};
