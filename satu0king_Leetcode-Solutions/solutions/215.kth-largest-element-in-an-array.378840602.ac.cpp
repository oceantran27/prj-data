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
  int findKthLargest(vector<int> &nums, int k) {
    k = nums.size() - k;
    nth_element(nums.begin(), nums.begin() + k, nums.end());
    return nums[k];
  }
};
