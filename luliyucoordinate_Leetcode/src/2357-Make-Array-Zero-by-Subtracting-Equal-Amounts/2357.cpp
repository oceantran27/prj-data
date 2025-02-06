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
  int minimumOperations(vector<int>& nums) {
    int cnt[101] = {};
    for (auto& num : nums) {
      cnt[num]++;
    }
    int res = 0;
    for (int i = 1; i <= 100; i++) res += cnt[i] ? 1 : 0;
    return res;
  }
};