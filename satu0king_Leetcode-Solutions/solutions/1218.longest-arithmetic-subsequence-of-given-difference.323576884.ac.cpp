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
  int longestSubsequence(vector<int> &arr, int difference) {

    int mp[40001] = {};
    int off = 20000;

    int ans = 0;
    for (int n : arr) {
      n += off;
      mp[n] = max(mp[n], 1 + mp[n - difference]);
      ans = max(ans, mp[n]);
    }
    return ans;
  }
};
