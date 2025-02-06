#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/total-distance-traveled/

class Solution {
 public:
  int distanceTraveled(int main, int additional) {
    int ret{};
    while (main) {
      if (main < 5) {
        ret += main * 10;
        main = 0;
      } else {
        ret += 50;
        main -= 5;
        if (additional) ++main, --additional;
      }
    }
    return ret;
  }
};
