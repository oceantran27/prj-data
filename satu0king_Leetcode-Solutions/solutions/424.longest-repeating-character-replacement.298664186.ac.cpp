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
  int characterReplacement(string s, int k) {
    int ans = 0;
    int l = 0;
    int r = 0;
    int n = s.size();

    for (char &c : s)
      c -= 'A';

    vector<int> count(26);
    int mx = 0;

    while (r < n) {
      mx = max(mx, ++count[s[r++]]);

      while (mx + k < r - l) {
        count[s[l++]]--;
      }

      ans = max(r - l, ans);
    }
    return ans;
  }
};
