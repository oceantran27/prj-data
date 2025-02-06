#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-69-number

class Solution {
 public:
  int maximum69Number(int num) {
    auto s = to_string(num);
    for (char& c : s) {
      if (c == '6') {
        c = '9';
        break;
      }
    }
    return stoi(s);
  }
};
