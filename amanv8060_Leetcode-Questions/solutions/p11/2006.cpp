#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
 public:
  int countKDifference(vector<int>& nums, int k) {
    int n = nums.size();
    int c = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (nums[i] - nums[j] == k || nums[j] - nums[i] == k) {
          c++;
        }
      }
    }
    return c;
  }
};
