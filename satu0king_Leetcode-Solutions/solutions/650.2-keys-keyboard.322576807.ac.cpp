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
  int minSteps(int n) {

    int ans = 0;

    int d = 2;
    while (n > 1) {
      while (n % d == 0) {
        ans += d;
        n /= d;
      }
      d++;
    }

    return ans;
  }
};
