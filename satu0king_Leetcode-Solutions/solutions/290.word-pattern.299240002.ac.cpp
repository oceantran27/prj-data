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
  bool wordPattern(string pattern, string str) {

    map<string, char> mp;

    set<char> used;

    stringstream fs(str);

    string s;
    int i = 0;
    while (fs >> s) {
      if (i == pattern.size())
        return false;

      if (mp.count(s)) {
        if (mp[s] != pattern[i])
          return false;
      } else {
        if (used.count(pattern[i]))
          return false;
        mp[s] = pattern[i];
        used.insert(pattern[i]);
      }
      i++;
    }

    return i == pattern.size();
  }
};
