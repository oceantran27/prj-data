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
  int missingNumber(vector<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      if (nums[i] < n && nums[i] != i) {
        int t = nums[nums[i]];
        nums[nums[i]] = nums[i];
        nums[i] = t;
        i--;
      }
    }

    for (int i = 0; i < n; i++)
      if (nums[i] != i)
        return i;
    return n;
  }
};
