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
  int titleToNumber(string s) {
    int ans = 0;

    for (char c : s) {
      ans = ans * 26 + (c - 'A' + 1);
    }
    return ans;
  }
};
