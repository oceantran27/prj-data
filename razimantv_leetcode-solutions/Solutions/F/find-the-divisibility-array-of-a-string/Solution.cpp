#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-divisibility-array-of-a-string/

class Solution {
 public:
  vector<int> divisibilityArray(string word, int m) {
    int n = word.size();
    vector<int> ret(n);
    for (long long i = 0, pref = 0; i < n; ++i) {
      pref = (pref * 10 + word[i] - '0') % m;
      if (!pref) ret[i] = 1;
    }
    return ret;
  }
};
