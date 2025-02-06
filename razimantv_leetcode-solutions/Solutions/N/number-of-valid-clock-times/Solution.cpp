#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-valid-clock-times/

class Solution {
 public:
  int countTime(string time) {
    int ret = 0;
    for (int i = 0; time[i]; ++i) {
      if (time[i] != '?') continue;
      for (char c = '0'; c <= '9'; ++c) {
        time[i] = c;
        ret += countTime(time);
      }
      return ret;
    }
    int h = (time[0] - '0') * 10 + time[1] - '0';
    int m = (time[3] - '0') * 10 + time[4] - '0';
    return h < 24 and m < 60;
  }
};
