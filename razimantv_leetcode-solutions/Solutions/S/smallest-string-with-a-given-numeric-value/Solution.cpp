#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/smallest-string-with-a-given-numeric-value

class Solution {
 public:
  string getSmallestString(int n, int k) {
    k -= n;
    string ret(n, ' ');
    for (int i = n - 1; i >= 0; --i)
      ret[i] = (char)('a' + min(k, 25)), k -= min(k, 25);
    return ret;
  }
};
