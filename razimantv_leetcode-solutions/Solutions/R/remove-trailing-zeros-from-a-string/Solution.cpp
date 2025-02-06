#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-trailing-zeros-from-a-string/

class Solution {
 public:
  string removeTrailingZeros(string num) {
    while (num.back() == '0') num.pop_back();
    return num;
  }
};
