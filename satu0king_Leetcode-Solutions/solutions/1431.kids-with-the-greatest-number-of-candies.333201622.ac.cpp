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
  vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    int mx = *max_element(candies.begin(), candies.end());
    vector<bool> ans;
    for (int c : candies)
      ans.push_back(c + extraCandies >= mx);
    return ans;
  }
};
