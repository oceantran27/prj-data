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
  int trailingZeroes(int n) {
    if (n < 5)
      return 0;
    return n / 5 + trailingZeroes(n / 5);
  }
};
