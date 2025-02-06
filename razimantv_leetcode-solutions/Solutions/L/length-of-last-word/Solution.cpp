#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/length-of-last-word

class Solution {
 public:
  int lengthOfLastWord(string s) {
    istringstream iss(s);
    string a;
    while (iss >> a)
      ;
    return a.size();
  }
};
