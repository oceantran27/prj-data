#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/basic-calculator

class Solution {
 public:
  int work(const string& s, int& p) {
    long long ret = 0;
    char op = '+';
    while (s[p]) {
      if (s[p] == ' ') {
        ++p;
        continue;
      }
      if (s[p] == '(') {
        long long cur = work(s, ++p);
        if (op == '+')
          ret += cur;
        else
          ret -= cur;
      } else if (s[p] == ')') {
        ++p;
        return ret;
      } else if (isdigit(s[p])) {
        long long cur = 0;
        while (isdigit(s[p])) cur = cur * 10 + s[p++] - '0';
        if (op == '+')
          ret += cur;
        else
          ret -= cur;
      } else
        op = s[p++];
    }
    return ret;
  }
  int calculate(string s) {
    int p = 0;
    return work(s, p);
  }
};
