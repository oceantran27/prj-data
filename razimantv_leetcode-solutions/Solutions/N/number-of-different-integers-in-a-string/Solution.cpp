#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-different-integers-in-a-string

class Solution {
 public:
  int numDifferentIntegers(string word) {
    set<string> s;
    string cur = "";
    for (int i = 0;; ++i) {
      if (word[i] == 0) {
        if (isdigit(word[i - 1])) s.insert(cur);
        break;
      } else if (isdigit(word[i])) {
        if (cur != "" or word[i] != '0') cur += word[i];
      } else {
        if (i > 0 and isdigit(word[i - 1])) s.insert(cur);
        cur = "";
      }
    }
    return s.size();
  }
};
