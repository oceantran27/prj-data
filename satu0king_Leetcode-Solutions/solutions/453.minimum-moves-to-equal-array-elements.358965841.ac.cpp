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
  int minMoves(vector<int> &nums) {
    long long ans = 0;
    long long mn = *min_element(nums.begin(), nums.end());
    long long sm = accumulate(nums.begin(), nums.end(), 0LL);
    return sm - mn * nums.size();
  }
};
