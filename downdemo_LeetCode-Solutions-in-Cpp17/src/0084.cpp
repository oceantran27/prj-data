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
  int largestRectangleArea(vector<int>& heights) {
    heights.emplace_back(0);
    stack<int> s;
    int res = 0;
    for (int i = 0; i < heights.size(); ++i) {
      while (!s.empty() && heights[i] < heights[s.top()]) {
        int t = s.top();
        s.pop();
        res = max(res, heights[t] * (s.empty() ? i : (i - s.top() - 1)));
      }
      s.emplace(i);
    }
    return res;
  }
};
