#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-only-letters

class Solution {
 public:
  string reverseOnlyLetters(string s) {
    for (int i = 0, j = s.size() - 1; i < j;) {
      if (!isalpha(s[i]))
        ++i;
      else if (!isalpha(s[j]))
        --j;
      else
        swap(s[i++], s[j--]);
    }
    return s;
  }
};
