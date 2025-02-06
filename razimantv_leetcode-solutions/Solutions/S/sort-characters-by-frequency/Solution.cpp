#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sort-characters-by-frequency

class Solution {
 public:
  string frequencySort(string s) {
    int frequency[256] = {0};
    for (char c : s) frequency[c]++;

    map<int, vector<char>> cmap;
    for (int i = 0; i < 256; ++i)
      if (frequency[i]) cmap[-frequency[i]].push_back(i);

    string ret = "";
    for (auto p : cmap) {
      for (char c : p.second) {
        ret += std::string(-p.first, c);
      }
    }

    return ret;
  }
};
