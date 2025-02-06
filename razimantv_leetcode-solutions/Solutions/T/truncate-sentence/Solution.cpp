#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/truncate-sentence

class Solution {
 public:
  string truncateSentence(string s, int k) {
    istringstream ss(s);
    string ret, temp;
    for (int i = 0; i < k; ++i) {
      ss >> temp;
      if (i) ret += " ";
      ret += temp;
    }
    return ret;
  }
};
