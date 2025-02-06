#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/detect-capital

class Solution {
 public:
  bool detectCapitalUse(string word) {
    int x = 0;
    for (char c : word)
      if (c <= 'Z') ++x;
    return x == 0 or x == word.size() or (x == 1 and word[0] <= 'Z');
  }
};
