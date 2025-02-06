#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/unique-morse-code-words

class Solution {
 public:
  int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse{".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                         "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                         "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                         "...-", ".--",  "-..-", "-.--", "--.."};
    unordered_set<string> seen;
    for (const string& s : words) {
      string cur;
      for (char c : s) cur += morse[c - 'a'];
      seen.insert(cur);
    }
    return seen.size();
  }
};
