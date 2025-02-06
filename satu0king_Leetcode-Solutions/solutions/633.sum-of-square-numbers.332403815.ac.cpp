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
  bool judgeSquareSum(int c) {

    for (long i = 0; i * i <= c; i++) {
      int t = c - i * i;
      double sqt = sqrt(t);
      if (sqt == (int)sqt)
        return true;
    }

    return false;
  }
};
