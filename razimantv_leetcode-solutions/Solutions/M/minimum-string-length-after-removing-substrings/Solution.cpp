#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-string-length-after-removing-substrings/

class Solution {
 public:
  int minLength(string s) {
    vector<char> stack;
    for (char c : s) {
      if (!stack.empty() and ((c == 'D' and stack.back() == 'C') or
                              (c == 'B' and stack.back() == 'A')))
        stack.pop_back();
      else
        stack.push_back(c);
    }
    return stack.size();
  }
};
