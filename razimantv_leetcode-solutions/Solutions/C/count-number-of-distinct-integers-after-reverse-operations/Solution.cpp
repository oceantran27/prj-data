#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/

class Solution {
 public:
  int rev(int n) {
    int ret = 0;
    while (n) {
      ret = ret * 10 + n % 10;
      n /= 10;
    }
    return ret;
  }
  int countDistinctIntegers(vector<int>& nums) {
    unordered_set<int> s;
    for (int x : nums) {
      s.insert(x);
      s.insert(rev(x));
    }
    return s.size();
  }
};
