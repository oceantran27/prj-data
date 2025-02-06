#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  string destCity(vector<vector<string>> &paths) {
    unordered_map<string, int> mp;
    for (auto &p : paths) {
      mp[p[0]]++;
      mp[p[1]];
    }

    for (auto [k, v] : mp)
      if (v == 0)
        return k;

    return "";
  }
};
