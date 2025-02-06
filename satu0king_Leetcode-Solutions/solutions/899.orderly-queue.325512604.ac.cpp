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
  string orderlyQueue(string S, int K) {
    string ans = S;
    if (K > 1) {
      sort(ans.begin(), ans.end());
      return ans;
    }

    S += S;

    for (int i = 0; i < ans.size(); i++) {
      ans = min(ans, S.substr(i, ans.size()));
    }
    return ans;
  }
};
