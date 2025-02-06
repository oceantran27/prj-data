#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-k-digits

class Solution {
 public:
  string removeKdigits(string num, int k) {
    string ret = "";
    int N = num.size(), req = N - k;
    for (int next = 0; req > 0 and next < num.size(); --req) {
      int bestpos = next;
      char best = num[next];
      for (int i = next + 1; i + req <= N; ++i) {
        if (num[i] < best) {
          best = num[i];
          bestpos = i;
        }
      }

      if (best > '0' or ret != "") ret += best;
      next = bestpos + 1;
    }

    if (ret == "") ret = "0";
    return ret;
  }
};
