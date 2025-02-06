#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/total-appeal-of-a-string

class Solution {
 public:
  long long appealSum(string s) {
    int N = s.size();
    vector<int> last(26, -1);
    long long ret{};
    for (int i = 0; i < N; ++i) {
      last[s[i] - 'a'] = i;
      for (int x : last) ret += x + 1;
    }
    return ret;
  }
};
