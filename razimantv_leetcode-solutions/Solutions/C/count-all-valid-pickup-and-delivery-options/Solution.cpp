#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-all-valid-pickup-and-delivery-options

class Solution {
 public:
  int countOrders(int n) {
    long long ret = 1;
    for (int i = 1; i <= n; ++i) ret = (ret * i * (2 * i - 1)) % 1'000'000'007;
    return ret;
  }
};
