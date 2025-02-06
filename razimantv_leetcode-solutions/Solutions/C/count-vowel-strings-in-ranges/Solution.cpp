#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-vowel-strings-in-ranges/

class Solution {
 public:
  vector<int> vowelStrings(vector<string>& words,
                           vector<vector<int>>& queries) {
    vector<char> vowel(256);
    for (char c : "aeiou") vowel[c] = 1;
    vector<int> pref{0};
    for (auto w : words)
      pref.push_back(pref.back() + vowel[w[0]] * vowel[w.back()]);

    vector<int> ret;
    for (auto q : queries) ret.push_back(pref[q[1] + 1] - pref[q[0]]);
    return ret;
  }
};
