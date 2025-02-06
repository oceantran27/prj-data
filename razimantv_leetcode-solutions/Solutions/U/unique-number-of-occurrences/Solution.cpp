#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
 public:
  bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> cnt;
    for (int x : arr) ++cnt[x];

    unordered_set<int> seen;
    for (auto [k, v] : cnt)
      if (seen.count(v))
        return false;
      else
        seen.insert(v);

    return true;
  }
};
