#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sorting-the-sentence

class Solution {
 public:
  string sortSentence(string s) {
    vector<string> v(10);
    istringstream iss(s);

    string t;
    while (iss >> t) {
      int l = t.size();
      v[t[l - 1] - '0'] = t.substr(0, l - 1);
    }

    string ret;
    for (string x : v) {
      if (x.empty()) continue;
      if (!ret.empty()) ret += " ";
      ret += x;
    }
    return ret;
  }
};
