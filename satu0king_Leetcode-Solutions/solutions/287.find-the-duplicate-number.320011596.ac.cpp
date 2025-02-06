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
  int findDuplicate(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      if (nums[i] == i)
        continue;
      if (nums[nums[i]] == nums[i])
        return nums[i];
      swap(nums[i], nums[nums[i]]);
      i--;
    }

    return n + 1;
  }
};
