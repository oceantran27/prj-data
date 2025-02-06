#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/neighboring-bitwise-xor/

class Solution {
 public:
  bool doesValidArrayExist(vector<int>& derived) {
    return !accumulate(derived.begin(), derived.end(), 0, bit_xor<void>());
  }
};
