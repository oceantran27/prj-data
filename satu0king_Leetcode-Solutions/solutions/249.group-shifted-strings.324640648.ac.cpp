#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  vector<vector<string>> groupStrings(vector<string> &strings) {
    unordered_map<string, vector<string>> mp;
    for (auto &s : strings)
      mp[f(s)].push_back(s);
    vector<vector<string>> result;
    for (auto &p : mp)
      result.push_back(p.second);
    return result;
  }

  string f(string s) {
    char mi = s[0] - 'a';
    for (char &c : s)
      c = (c - 'a' - mi + 26) % 26 + 'a';
    return s;
  }
};
