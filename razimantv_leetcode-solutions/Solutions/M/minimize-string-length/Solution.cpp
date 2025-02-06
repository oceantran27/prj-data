#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimize-string-length/

class Solution {
 public:
  int minimizedStringLength(string s) {
    unordered_set<char> ch(s.begin(), s.end());
    return ch.size();
  }
};
