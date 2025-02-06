#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/account-balance-after-rounded-purchase/

class Solution {
 public:
  int accountBalanceAfterPurchase(int purchaseAmount) {
    int ret = 100 - purchaseAmount;
    if (ret % 10 > 5)
      ret += 10 - ret % 10;
    else
      ret -= ret % 10;
    return ret;
  }
};
