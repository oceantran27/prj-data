#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-difference

class Solution {
 public:
  char findTheDifference(string s, string t) {
    int ans{0};
    for (char c : s) ans ^= c;
    for (char c : t) ans ^= c;
    return ans;
  }
};
