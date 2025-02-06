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
  int findContentChildren(vector<int> &g, vector<int> &s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int ans = 0;
    int l = 0;

    for (int i = 0; i < g.size() && l < s.size(); i++)
      if (g[i] <= s[l]) {
        ans++;
        l++;
      } else {
        l++;
        i--;
      }

    return ans;
  }
};
