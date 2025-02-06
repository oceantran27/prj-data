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
  int maxPower(string s) {
    int ans = 0;
    int count = 0;
    char prev = 0;
    for (char c : s) {
      if (c == prev)
        count++;
      else {
        prev = c;
        count = 1;
      }
      ans = max(ans, count);
    }

    return ans;
  }
};
