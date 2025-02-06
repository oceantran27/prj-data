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
  bool isNStraightHand(vector<int> &hand, int W) {

    map<int, int> map;

    for (int c : hand)
      map[c]++;

    auto it = map.begin();

    while (it != map.end()) {

      int t = W;
      auto temp = it;
      int prev = it->first;
      while (t--) {
        if (!map[prev])
          return false;
        map[prev++]--;
      }

      while (it->second == 0 && it != map.end())
        it++;
    }

    return true;
  }
};
