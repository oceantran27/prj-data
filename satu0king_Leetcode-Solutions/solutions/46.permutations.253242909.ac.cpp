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
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> ans;
    int f = 1;
    int n = nums.size();
    while (n)
      f *= n--;

    for (int i = 0; i < f; i++) {
      ans.push_back(nums);
      next_permutation(nums.begin(), nums.end());
    }

    return ans;
  }
};
