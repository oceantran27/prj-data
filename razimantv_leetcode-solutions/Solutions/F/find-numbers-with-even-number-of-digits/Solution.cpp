#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-numbers-with-even-number-of-digits

class Solution {
 public:
  int findNumbers(vector<int>& nums) {
    int cnt = 0;
    for (int n : nums) cnt += (to_string(n).size() % 2 == 0);
    return cnt;
  }
};
