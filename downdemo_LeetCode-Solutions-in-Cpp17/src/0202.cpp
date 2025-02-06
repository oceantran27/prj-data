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
  bool isHappy(int n) {
    unordered_set<int> s;
    while (n != 1) {
      n = helper(n);
      if (s.count(n)) {
        return false;
      }
      s.emplace(n);
    }
    return true;
  }

  int helper(int n) {
    int sum = 0;
    while (n) {
      int t = n % 10;
      sum += t * t;
      n /= 10;
    }
    return sum;
  }
};
