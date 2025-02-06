#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    stack<char> stk;
    for (auto& x : s) {
      if (x == '(' || x == '{' || x == '[') {
        stk.emplace(x);
      } else if (!stk.empty() && stk.top() == m.at(x)) {
        stk.pop();
      } else {
        return false;
      }
    }
    return stk.empty();
  }

 private:
  const unordered_map<char, char> m{
      {')', '('},
      {'}', '{'},
      {']', '['},
  };
};
