#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/

class Solution {
 public:
  bool isAcronym(vector<string>& words, string s) {
    string acr;
    for (auto w : words) acr += w[0];
    return acr == s;
  }
};
