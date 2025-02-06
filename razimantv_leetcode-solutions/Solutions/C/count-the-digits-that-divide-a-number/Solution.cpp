#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-the-digits-that-divide-a-number/

class Solution {
 public:
  int countDigits(int num) {
    auto s = to_string(num);
    int cnt{};
    for (char c : s)
      if (num % stoi(c + string("")) == 0) ++cnt;
    return cnt;
  }
};
