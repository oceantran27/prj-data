#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/validate-stack-sequences

class Solution {
 public:
  bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    stack<int> s;
    for (int i = 0, j = 0, n = pushed.size(); j < n; ++j) {
      while (i < n and (i <= j or s.top() != popped[j])) s.push(pushed[i++]);
      if (s.top() != popped[j]) return false;
      s.pop();
    }

    return true;
  }
};
