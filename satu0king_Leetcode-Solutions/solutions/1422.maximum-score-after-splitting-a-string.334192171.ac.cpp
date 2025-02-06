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
  int maxScore(string s) {
    int z = 0;
    int o = count(s.begin(), s.end(), '1');
    int ans = 0;

    for (int i = 0; i < s.size() - 1; i++) {
      if (s[i] == '1')
        o--;
      else
        z++;
      ans = max(ans, o + z);
    }
    return ans;
  }
};
