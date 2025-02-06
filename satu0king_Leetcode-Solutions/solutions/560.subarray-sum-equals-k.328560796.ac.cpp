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
  int subarraySum(vector<int> &nums, int k) {
    unordered_map<int, int> mp;
    mp[0]++;

    int sum = 0;
    int ans = 0;
    for (int n : nums) {
      sum += n;
      ans += mp[sum - k];
      mp[sum]++;
    }
    return ans;
  }
};
