#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/valid-parentheses

class Solution {
 public:
  bool isValid(string s) {
    map<char, char> match{{')', '('}, {']', '['}, {'}', '{'}};
    stack<char> cur;
    for (char c : s) {
      if (!match.count(c))
        cur.push(c);
      else if (cur.empty() or cur.top() != match[c])
        return false;
      else
        cur.pop();
    }
    return cur.empty();
  }
};
