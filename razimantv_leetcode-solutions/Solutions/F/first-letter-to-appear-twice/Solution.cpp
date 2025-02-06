#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/first-letter-to-appear-twice

class Solution {
 public:
  char repeatedCharacter(string s) {
    set<char> ss;
    for (char c : s) {
      if (ss.count(c)) return c;
      ss.insert(c);
    }
    return ' ';
  }
};
