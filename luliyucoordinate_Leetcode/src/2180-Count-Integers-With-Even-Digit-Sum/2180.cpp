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
  int countEven(int num) {
    int res = num / 10 * 5 - 1;
    int s = 0;
    for (int x = num / 10; x > 0; x /= 10) {
      s += x % 10;
    }
    res += (num % 10 + 2 - (s & 1)) >> 1;
    return res;
  }
};
