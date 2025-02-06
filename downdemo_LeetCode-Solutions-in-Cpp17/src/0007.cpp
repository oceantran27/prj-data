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
  int reverse(int x) {
    int res = 0;
    while (x) {
      int t = x % 10;
      if (res > INT_MAX / 10 || (res == INT_MAX / 10 && t > (INT_MAX % 10))) {
        return 0;
      }
      if (res < INT_MIN / 10 || (res == INT_MIN / 10 && t < (INT_MIN % 10))) {
        return 0;
      }
      res = res * 10 + t;
      x /= 10;
    }
    return res;
  }
};
