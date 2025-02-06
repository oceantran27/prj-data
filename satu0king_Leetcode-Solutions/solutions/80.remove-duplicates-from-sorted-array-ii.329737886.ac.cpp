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
  int removeDuplicates(vector<int> &nums) {
    int l = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (i + 2 < nums.size() && nums[i + 2] == nums[i])
        continue;
      nums[l++] = nums[i];
    }
    return l;
  }
};
