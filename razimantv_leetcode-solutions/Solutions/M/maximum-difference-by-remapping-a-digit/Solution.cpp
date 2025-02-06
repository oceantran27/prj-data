#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/

class Solution {
 public:
  int change(string s, char a, char b) {
    for (char& c : s)
      if (c == a) c = b;
    return stoi(s);
  }
  int minMaxDifference(int num) {
    auto s = to_string(num);
    int n1 = num, n2 = num;
    for (char c : s) {
      if (c < '9') {
        n1 = change(s, c, '9');
        break;
      }
    }
    for (char c : s) {
      if (c > '0') {
        n2 = change(s, c, '0');
        break;
      }
    }
    return n1 - n2;
  }
};
