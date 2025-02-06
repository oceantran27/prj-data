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
  int numRabbits(vector<int> &answers) {
    unordered_map<int, int> count;
    for (int a : answers)
      count[a]++;
    int ans = 0;

    for (auto &p : count) {
      while (p.second > 0) {
        ans += (p.first + 1);
        p.second -= (p.first + 1);
      }
    }

    return ans;
  }
};
