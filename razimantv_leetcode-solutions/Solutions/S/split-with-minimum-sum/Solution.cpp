#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/split-with-minimum-sum/

class Solution {
 public:
  int splitNum(int num) {
    auto s = to_string(num);
    sort(s.begin(), s.end());
    int L{}, R{};
    for (char c : s) {
      L = L * 10 + c - '0';
      swap(L, R);
    }
    return L + R;
  }
};
