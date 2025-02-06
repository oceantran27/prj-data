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
  int numIdenticalPairs(vector<int> &nums) {
    unordered_map<int, int> mp;
    int ans = 0;
    for (int a : nums)
      ans += mp[a]++;
    return ans;
  }
};
