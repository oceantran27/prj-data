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
  int rearrangeCharacters(string s, string target) {
    int a[26] = {}, b[26] = {};
    for (auto c : s) a[c - 'a']++;
    for (auto c : target) b[c - 'a']++;
    int res = 100;
    for (int i = 0; i < 26; i++) {
      if (b[i]) {
        res = min(res, a[i] / b[i]);
      }
    }
    return res;
  }
};