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
  int largestAltitude(vector<int>& gain) {
    int res = 0, cur = 0;
    for (auto& x : gain) {
      cur += x;
      res = max(res, cur);
    }
    return res;
  }
};