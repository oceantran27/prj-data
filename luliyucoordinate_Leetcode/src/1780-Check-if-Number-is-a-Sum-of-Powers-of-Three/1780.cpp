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
  bool checkPowersOfThree(int n) {
    while (n) {
      if (n % 3 == 2) {
        return false;
      }
      n /= 3;
    }
    return true;
  }
};