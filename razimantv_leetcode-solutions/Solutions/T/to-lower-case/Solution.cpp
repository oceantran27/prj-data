#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/to-lower-case

class Solution {
 public:
  string toLowerCase(string s) {
    for (char& c : s) c |= ' ';
    return s;
  }
};
