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
  char repeatedCharacter(string s) {
    int cnt[26] = {};
    for (auto c : s) {
      auto x = c - 'a';
      if (cnt[x]) return c;
      cnt[x]++;
    }
    return ' ';
  }
};