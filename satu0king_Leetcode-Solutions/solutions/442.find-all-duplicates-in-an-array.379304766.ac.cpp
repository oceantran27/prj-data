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
  vector<int> findDuplicates(vector<int> &nums) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
      int num = abs(nums[i]);
      int index = num - 1;
      if (nums[index] < 0) {
        ans.push_back(index + 1);
      }
      nums[index] *= -1;
    }
    return ans;
  }
};
