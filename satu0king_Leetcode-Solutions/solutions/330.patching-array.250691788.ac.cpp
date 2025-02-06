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
  int minPatches(vector<int> &nums, int n) {
    long long int current = 1;
    int ans = 0;

    int i = 0;
    while (current <= n) {
      if (i < nums.size() && nums[i] <= current) {
        current += nums[i++];
      } else {
        ans++;
        current *= 2;
      }
    }

    return ans;
  }
};
