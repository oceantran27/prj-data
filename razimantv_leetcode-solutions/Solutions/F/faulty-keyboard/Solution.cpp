#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/faulty-keyboard/

class Solution {
 public:
  string finalString(string s) {
    string ret;
    for (char c : s) {
      if (c == 'i')
        reverse(ret.begin(), ret.end());
      else
        ret += c;
    }
    return ret;
  }
};
