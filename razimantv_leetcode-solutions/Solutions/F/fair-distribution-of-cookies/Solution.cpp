#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/fair-distribution-of-cookies

class Solution {
 public:
  int distributeCookies(vector<int>& cookies, int k) {
    sort(cookies.begin(), cookies.end(), greater<int>());
    int n = cookies.size(), pp = 1;
    for (int i = 1; i < n; ++i) pp *= k;

    int ret = INT_MAX;
    for (int i = 0; i < pp; ++i) {
      vector<int> v(k);
      int worst = v[0] = cookies[0];
      for (int ii = i, j = 1; j < n; ++j) {
        if ((worst = max(worst, v[ii % k] += cookies[j])) >= ret) goto BPP;
        ii /= k;
      }
      ret = min(ret, worst);
    BPP:;
    }
    return ret;
  }
};
