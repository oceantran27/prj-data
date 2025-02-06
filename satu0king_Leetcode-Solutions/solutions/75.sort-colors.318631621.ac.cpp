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
  void sortColors(vector<int> &nums) {
    int l = 0;
    int r = nums.size() - 1;

    for (int i = l; i <= r; i++) {
      if (nums[i] == 0) {
        swap(nums[i], nums[l++]);
      } else if (nums[i] == 2) {
        swap(nums[i], nums[r--]);
        i--;
      }
    }
  }
};
