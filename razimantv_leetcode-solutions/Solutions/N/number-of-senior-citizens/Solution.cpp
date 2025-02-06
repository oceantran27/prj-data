#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-senior-citizens/

class Solution {
 public:
  int countSeniors(vector<string>& details) {
    int ret{};
    for (string s : details)
      if (s.substr(11, 2) > "60") ++ret;
    return ret;
  }
};
