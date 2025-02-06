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
  int secondHighest(string s) {
    int a = -1, b = -1;
    for (auto c : s) {
      int x = c - '0';
      if (x >= 0 && x <= 9) {
        if (a < x) {
          b = a;
          a = x;
        } else if (a > x && b < x) {
          b = x;
        }
      }
    }
    return b;
  }
};