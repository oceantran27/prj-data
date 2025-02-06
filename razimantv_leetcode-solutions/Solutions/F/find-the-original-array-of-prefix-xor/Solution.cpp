#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-original-array-of-prefix-xor/

class Solution {
 public:
  vector<int> findArray(vector<int>& pref) {
    int n = pref.size();
    for (int i = n - 1; i; --i) pref[i] ^= pref[i - 1];
    return pref;
  }
};
