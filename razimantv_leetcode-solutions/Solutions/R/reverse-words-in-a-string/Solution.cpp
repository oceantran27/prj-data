#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
 public:
  string reverseWords(string s) {
    istringstream iss(s);
    vector<string> v;
    string temp;
    while (iss >> temp) v.push_back(temp);
    if (v.empty()) return "";
    temp = v.back();
    for (int i = v.size() - 1; i--;) temp += " " + v[i];
    return temp;
  }
};
