#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/largest-time-for-given-digits

class Solution {
 public:
  string largestTimeFromDigits(vector<int>& A) {
    sort(A.begin(), A.end());
    string best = "";
    do {
      int H = A[0] * 10 + A[1], M = A[2] * 10 + A[3];
      if (H > 23 or M > 59) continue;
      string cur = (H < 10 ? "0" : "") + to_string(H) + ":" +
                   (M < 10 ? "0" : "") + to_string(M);
      best = max(best, cur);
    } while (next_permutation(A.begin(), A.end()));
    return best;
  }
};
