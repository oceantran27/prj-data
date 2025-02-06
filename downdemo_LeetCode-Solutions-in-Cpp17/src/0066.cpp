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
  vector<int> plusOne(vector<int>& digits) {
    int carry = 1;
    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
      if (!carry) {
        break;
      }
      *it += carry;
      carry = *it / 10;
      *it %= 10;
    }
    if (carry) {
      digits.emplace(digits.begin(), carry);
    }
    return digits;
  }
};
