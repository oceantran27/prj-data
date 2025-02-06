#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-odd-binary-number/

class Solution {
 public:
  string maximumOddBinaryNumber(string s) {
    sort(s.begin(), s.end(), greater<char>());
    return s.substr(1) + "1";
  }
};
