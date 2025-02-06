#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/goat-latin

class Solution {
 public:
  string toGoatLatin(string S) {
    istringstream iss(S);
    string ret = "", add = "ma", cur, vowels = "aeiouAEIOU";
    unordered_set<char> isvowel;
    for (char c : vowels) isvowel.insert(c);
    while (iss >> cur) {
      add += 'a';
      if (!ret.empty()) ret += ' ';
      if (isvowel.count(cur[0]))
        ret += cur;
      else
        ret += cur.substr(1) + cur[0];
      ret += add;
    }
    return ret;
  }
};
