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
  int numWays(int n, int k) {
    if (n == 0 || k == 0)
      return 0;
    vector<int> ans(2);
    ans[0] = 0;
    ans[1] = k;
    for (int i = 1; i < n; i++) {
      vector<int> ans_next(2);
      ans_next[0] = ans[1];
      ans_next[1] = (ans[1] + ans[0]) * (k - 1);
      swap(ans_next, ans);
    }

    return ans[0] + ans[1];
  }
};
