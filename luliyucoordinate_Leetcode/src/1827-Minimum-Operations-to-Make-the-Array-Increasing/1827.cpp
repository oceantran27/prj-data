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
  int minOperations(vector<int>& nums) {
    int res = 0;
    int p = 0;
    for (auto& num : nums) {
      if (num <= p) {
        p++;
        res += p - num;
      } else {
        p = num;
      }
    }
    return res;
  }
};