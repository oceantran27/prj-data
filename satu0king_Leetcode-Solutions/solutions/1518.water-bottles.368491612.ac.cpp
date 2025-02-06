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
  int numWaterBottles(int numBottles, int numExchange) {
    int ans = 0;
    int empty = 0;
    do {
      ans += numBottles;
      empty += numBottles;
      numBottles = empty / numExchange;
      empty %= numExchange;
      if (!numBottles)
        break;
    } while (true);
    return ans;
  }
};
