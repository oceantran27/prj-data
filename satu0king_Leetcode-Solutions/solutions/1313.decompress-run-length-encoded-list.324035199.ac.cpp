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
  vector<int> decompressRLElist(vector<int> &nums) {
    vector<int> result;
    result.reserve(1e6);

    for (int i = 1; i < nums.size(); i += 2)
      result.insert(result.end(), nums[i - 1], nums[i]);
    return result;
  }
};
