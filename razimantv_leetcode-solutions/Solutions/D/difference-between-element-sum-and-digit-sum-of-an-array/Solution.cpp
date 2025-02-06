#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/

class Solution {
 public:
  int digsum(int x) {
    if (x < 10) return x;
    return x % 10 + digsum(x / 10);
  }
  int differenceOfSum(vector<int>& nums) {
    int tot{};
    for (int x : nums) tot += x - digsum(x);
    return tot;
  }
};
