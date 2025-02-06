#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/decode-ways-ii

class Solution {
 public:
  int numDecodings(string s) {
    if (s[0] == '0') return 0;

    long long prev = 1, cur = ((s[0] == '*') ? 9 : 1);
    for (int i = 1; s[i]; ++i) {
      long long next = 0;
      if (s[i] > '0' and s[i] <= '9')
        next = cur;
      else if (s[i] == '*')
        next = 9 * cur;
      if (s[i - 1] == '1')
        next += ((s[i] == '*') ? 9 : 1) * prev;
      else if (s[i - 1] == '2')
        next += ((s[i] == '*') ? 6 : (s[i] < '7')) * prev;
      else if (s[i - 1] == '*')
        next += ((s[i] == '*') ? 15 : (1 + (s[i] < '7'))) * prev;
      prev = cur;
      cur = next % 1'000'000'007;
    }
    return cur;
  }
};
