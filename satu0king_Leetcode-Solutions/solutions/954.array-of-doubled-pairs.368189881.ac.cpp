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
  bool canReorderDoubled(vector<int> &A) {
    map<int, int> mp;
    for (int a : A)
      mp[a]++;
    for (auto &p : mp)
      while (p.second) {
        p.second--;
        if (p.first % 2 == 0 && mp[p.first / 2])
          mp[p.first / 2]--;
        else if (mp[p.first * 2])
          mp[p.first * 2]--;
        else
          return false;
      }
    return true;
  }
};
