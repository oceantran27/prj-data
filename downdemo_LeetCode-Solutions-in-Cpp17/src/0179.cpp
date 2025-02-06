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
  string largestNumber(vector<int>& nums) {
    if (all_of(nums.begin(), nums.end(), [](int x) { return !x; })) {
      return "0";
    }
    vector<string> v;
    transform(nums.begin(), nums.end(), back_inserter(v),
              [](int x) { return to_string(x); });
    sort(v.begin(), v.end(),
         [](const string& x, const string& y) { return y + x < x + y; });
    return accumulate(v.begin(), v.end(), string{""});
  }
};
