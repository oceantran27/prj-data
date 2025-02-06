#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/perfect-squares

class Solution {
 public:
  int numSquares(int n) {
    int m = int(sqrt(n));
    if (m * m == n) return 1;

    bool flag = true;
    m = n;
    while ((m & 1) == 0) m >>= 1;
    for (int i = 3; i * i <= m; i += 2) {
      if (m % i) continue;
      int cnt = 0;
      while (m % i == 0) {
        cnt++;
        m /= i;
      }
      if (i % 4 == 3 and (cnt & 1)) {
        flag = false;
        break;
      }
    }
    if (flag and (m % 4) != 3) return 2;

    m = n;
    while ((m & 3) == 0) m >>= 2;
    if (m % 8 == 7)
      return 4;
    else
      return 3;
  }
};
