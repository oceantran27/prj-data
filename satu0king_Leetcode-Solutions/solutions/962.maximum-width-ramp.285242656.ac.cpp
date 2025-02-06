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
  int maxWidthRamp(vector<int> &A) {

    int ans = 0;
    map<int, int> mp;
    mp[A[0]] = 0;
    for (int i = 1; i < A.size(); i++) {
      auto it = mp.upper_bound(A[i]);
      if (it != mp.begin()) {
        it = prev(it);
        ans = max(ans, i - it->second);
      } else if (A[i] < mp.begin()->first) {
        mp[A[i]] = i;
      }
    }

    return ans;
  }
};
