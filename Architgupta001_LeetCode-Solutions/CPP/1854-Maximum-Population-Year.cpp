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
  int maximumPopulation(vector<vector<int>> &logs) {
    vector<vector<int>> ok;
    for (auto l : logs) {
      ok.push_back({l[0], 1});
      ok.push_back({l[1], -1});
    }
    int ans = 0, mx = 0, curr = 0;
    sort(begin(ok), end(ok));
    for (auto x : ok) {
      curr += x[1];
      if (curr > mx) {
        mx = curr;
        ans = x[0];
      }
    }
    return ans;
  }
};
