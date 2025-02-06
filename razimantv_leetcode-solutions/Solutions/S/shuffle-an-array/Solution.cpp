#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/shuffle-an-array

class Solution {
 public:
  vector<int> v;
  Solution(vector<int>& nums) : v(nums) {}

  /** Resets the array to its original configuration and return it. */
  vector<int> reset() { return v; }

  /** Returns a random shuffling of the array. */
  vector<int> shuffle() {
    auto ret = v;
    random_shuffle(ret.begin(), ret.end());
    return ret;
  }
};

