#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-string

class Solution {
 public:
  void reverseString(vector<char>& s) {
    int N = s.size();
    for (int i = 0, j = N - 1; i < j; ++i, --j) swap(s[i], s[j]);
  }
};
