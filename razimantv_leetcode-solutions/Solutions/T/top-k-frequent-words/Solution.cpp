#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/top-k-frequent-words

class Solution {
 public:
  vector<string> topKFrequent(vector<string>& words, int K) {
    unordered_map<string, int> m;
    for (const string& s : words) ++m[s];

    set<pair<int, string>> sorted;
    for (const auto& [k, v] : m) {
      sorted.insert({-v, k});
      if (sorted.size() > K) sorted.erase(--sorted.end());
    }

    vector<string> ret;
    for (const auto& [cnt, str] : sorted) ret.push_back(str);
    return ret;
  }
};
