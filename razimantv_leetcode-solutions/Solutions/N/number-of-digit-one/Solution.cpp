#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-digit-one

class Solution {
 public:
  int countDigitOne(int n) {
    int ret = 0;
    for (int pos = 1'000'000'000; pos; pos /= 10) {
      if (n < pos) continue;
      int curdig = (n / pos) % 10;
      if (curdig == 0)
        ret += (n / pos / 10) * pos;
      else if (curdig == 1)
        ret += (n / pos / 10) * pos + n % pos + 1;
      else
        ret += (n / pos / 10 + 1) * pos;
    }
    return ret;
  }
};
