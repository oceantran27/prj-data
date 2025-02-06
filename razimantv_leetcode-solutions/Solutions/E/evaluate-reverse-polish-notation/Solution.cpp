#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/evaluate-reverse-polish-notation

class Solution {
 public:
  int evalRPN(vector<string>& tokens) {
    vector<int> v;
    for (const string& t : tokens) {
      if (t.size() > 1 or isdigit(t[0]))
        v.push_back(stoi(t));
      else {
        int op2 = v.back();
        v.pop_back();
        int op1 = v.back();
        v.pop_back();
        if (t == "+")
          v.push_back(op1 + op2);
        else if (t == "-")
          v.push_back(op1 - op2);
        else if (t == "*")
          v.push_back(op1 * op2);
        else if (t == "/")
          v.push_back(op1 / op2);
      }
    }
    return v[0];
  }
};
