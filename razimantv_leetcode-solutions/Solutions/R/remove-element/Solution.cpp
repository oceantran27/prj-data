#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-element

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int N = nums.size();
    for (int i = 0; i < N;) {
      if (nums[i] == val) {
        for (int k = i; k + 1 < N; ++k) nums[k] = nums[k + 1];
        --N;
      } else
        ++i;
    }
    return N;
  }
};
