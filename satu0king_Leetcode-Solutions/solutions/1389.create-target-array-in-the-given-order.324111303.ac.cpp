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
  vector<int> createTargetArray(vector<int> &nums, vector<int> &index) {
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
      result.insert(result.begin() + index[i], nums[i]);
    return result;
  }
};
