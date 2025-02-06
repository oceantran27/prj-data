#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/replace-all-digits-with-characters

class Solution {
 public:
  string replaceDigits(string s) {
    int N = s.size();
    for (int i = 1; i < N; i += 2) {
      s[i] += s[i - 1] - '0';
    }
    return s;
  }
};
