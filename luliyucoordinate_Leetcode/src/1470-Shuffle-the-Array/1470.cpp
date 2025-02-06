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
  vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> res(n * 2);
    for (int i = 0, j = n; i < n; i++, j++) {
      res[i << 1] = nums[i];
      res[(i << 1) + 1] = nums[j];
    }
    return res;
  }
};