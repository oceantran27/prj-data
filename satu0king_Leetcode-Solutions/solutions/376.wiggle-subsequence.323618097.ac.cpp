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
  int wiggleMaxLength(vector<int> &nums) {
    if (nums.empty())
      return 0;
    int up = 1;
    int down = 1;
    for (int i = 1; i < nums.size(); i++)
      if (nums[i] > nums[i - 1])
        up = down + 1;
      else if (nums[i] < nums[i - 1])
        down = up + 1;
    return max(up, down);
  }
};
