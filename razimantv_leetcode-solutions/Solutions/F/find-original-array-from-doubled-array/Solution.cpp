#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-original-array-from-doubled-array/

class Solution {
 public:
  vector<int> findOriginalArray(vector<int>& changed) {
    multiset<int> seen(changed.begin(), changed.end());
    vector<int> ret;

    while (!seen.empty()) {
      int x = *seen.begin();
      seen.erase(seen.begin());

      auto sit = seen.find(2 * x);
      if (sit == seen.end()) return {};
      ret.push_back(x);
      seen.erase(sit);
    }
    return ret;
  }
};
