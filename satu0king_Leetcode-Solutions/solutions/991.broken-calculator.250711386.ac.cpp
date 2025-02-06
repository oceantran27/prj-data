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
  int brokenCalc(int X, int Y) {

    int ans = 0;
    while (Y > X) {
      if (Y % 2)
        Y++;
      else
        Y /= 2;
      ans++;
    }

    ans += X - Y;

    return ans;
  }
};
