#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k

class Solution {
 public:
  bool hasAllCodes(string s, int k) {
    int L = 1 << k, kmask = L - 1;
    if (s.size() - k + 1 < L) return false;
    vector<char> seen(L, 0);

    int cnt = 0;
    for (int i = 0, n = s.size(), curmask = 0; i < n; ++i) {
      curmask = ((curmask << 1) | (s[i] - '0')) & kmask;
      if (i >= k - 1) {
        if (!seen[curmask]) seen[curmask] = 1, ++cnt;
      }
    }

    return cnt == L;
  }
};
