#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/distribute-money-to-maximum-children/

class Solution {
 public:
  int distMoney(int money, int children) {
    if (money < children)
      return -1;
    else if (money == children * 8 - 4)
      return children - 2;
    else if (money == children * 8)
      return children;
    else
      return min((money - children) / 7, children - 1);
  }
};
