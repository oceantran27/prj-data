#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-population-year

class Solution {
 public:
  int maximumPopulation(vector<vector<int>>& logs) {
    vector<int> cnt(101);
    for (auto& v : logs) {
      for (int i = v[0]; i < v[1]; ++i) cnt[i - 1950]++;
    }

    int bestyear = 0;
    for (int i = 0; i <= 100; ++i)
      if (cnt[i] > cnt[bestyear]) bestyear = i;
    return bestyear + 1950;
  }
};
