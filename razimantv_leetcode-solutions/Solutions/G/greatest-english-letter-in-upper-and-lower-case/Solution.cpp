#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/greatest-english-letter-in-upper-and-lower-case

class Solution {
 public:
  string greatestLetter(string s) {
    map<char, int> m;
    for (char c : s)
      if (isupper(c))
        m[c] |= 1;
      else
        m[toupper(c)] |= 2;
    for (auto mit = m.rbegin(); mit != m.rend(); ++mit)
      if (mit->second == 3) return string(1, mit->first);
    return "";
  }
};
