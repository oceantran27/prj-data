#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/categorize-box-according-to-criteria/

class Solution {
 public:
  string categorizeBox(int length, int width, int height, int mass) {
    int maxl = max(length, max(width, height));
    long long volume = length * 1ll * width * height;
    bool bulky = (maxl >= 10'000) or (volume >= 1'000'000'000);
    bool heavy = mass >= 100;
    if (bulky and heavy)
      return "Both";
    else if (bulky)
      return "Bulky";
    else if (heavy)
      return "Heavy";
    else
      return "Neither";
  }
};
