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
  void wiggleSort(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
      if (i % 2 == 0) {
        if (nums[i + 1] < nums[i])
          swap(nums[i + 1], nums[i]);
      } else {
        if (nums[i + 1] > nums[i])
          swap(nums[i + 1], nums[i]);
      }
    }
  }
};
