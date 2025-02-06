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
  int totalFruit(vector<int>& fruits) {
    int n = fruits.size();
    int res = 0;
    unordered_map<int, int> cnt;

    for (int i = 0, j = 0; j < n; j++) {
      cnt[fruits[j]]++;
      while (cnt.size() > 2) {
        auto& x = cnt[fruits[i]];
        if (--x == 0) cnt.erase(fruits[i]);
        i++;
      }
      res = max(res, j - i + 1);
    }
    return res;
  }
};