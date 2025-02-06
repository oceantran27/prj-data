#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int k = nums.size();
    int beg = 0;
    for (int i = 0; i < k; i++) {
      if (nums[i] != val) {
        nums[beg] = nums[i];
        beg++;
      }
    }
    return beg;
  }
};
