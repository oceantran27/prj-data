#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/integer-to-roman

class Solution {
 public:
  string intToRoman(int num) {
    vector<int> nums{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> conv{"M",  "CM", "D",  "CD", "C",  "XC", "L",
                        "XL", "X",  "IX", "V",  "IV", "I"};

    string ret = "";
    for (int i = 0; num;) {
      if (num >= nums[i]) {
        num -= nums[i];
        ret += conv[i];
      } else
        ++i;
    }
    return ret;
  }
};
