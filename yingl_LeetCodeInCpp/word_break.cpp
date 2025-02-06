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
  bool wordBreak(string s, unordered_set<string> &dict) {
    int len = s.length();
    vector<bool> match(len + 1, false);

    match[0] = true;

    for (int i = 1; i <= len; ++i) {
      for (int j = i - 1; j >= 0; --j) {
        if (match[j]) {
          if (dict.find(s.substr(j, i - j)) != dict.end()) {
            match[i] = true;  // 前i个字母可以match
            break;
          }
        }
      }
    }

    return match[len];
  }
};