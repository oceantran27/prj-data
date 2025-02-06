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
  bool lemonadeChange(vector<int> &bills) {
    int five = 0;
    int ten = 0;
    for (int n : bills) {
      if (n == 5)
        five++;
      if (n == 10) {
        if (five) {
          five--;
          ten++;
        } else
          return false;
      }
      if (n == 20) {
        if (ten && five) {
          ten--;
          five--;
        } else if (five >= 3) {
          five -= 3;
        } else
          return false;
      }
    }
    return true;
  }
};
