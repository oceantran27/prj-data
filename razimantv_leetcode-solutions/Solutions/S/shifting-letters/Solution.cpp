#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/shifting-letters

class Solution {
 public:
  string shiftingLetters(string s, vector<int>& shifts) {
    for (int i = s.size() - 1, x = 0; i >= 0; --i)
      s[i] = 'a' + (s[i] - 'a' + (x = (x + shifts[i]) % 26)) % 26;

    return s;
  }
};
