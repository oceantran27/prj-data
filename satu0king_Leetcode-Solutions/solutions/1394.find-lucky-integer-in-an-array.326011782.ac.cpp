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
  int findLucky(vector<int> &arr) {
    int ans = -1;
    map<int, int> mp;
    for (int a : arr)
      mp[a]++;
    for (auto [k, v] : mp)
      if (k == v)
        ans = k;
    return ans;
  }
};
