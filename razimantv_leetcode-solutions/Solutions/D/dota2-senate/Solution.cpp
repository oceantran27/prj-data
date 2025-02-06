#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/dota2-senate

class Solution {
 public:
  string predictPartyVictory(string senate) {
    int r{}, d{}, diff{};
    for (char c : senate) ++(c == 'R' ? r : d);
    while (r and d) {
      string next;
      for (char c : senate) {
        if (c == 'R') {
          if (diff++ < 0)
            --r;
          else
            next += c;
        } else {
          if (diff-- > 0)
            --d;
          else
            next += c;
        }
      }
      senate = next;
    }
    return r ? "Radiant" : "Dire";
  }
};
