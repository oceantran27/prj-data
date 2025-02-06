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
  vector<int> dailyTemperatures(vector<int> &T) {

    stack<int> s;
    int n = T.size();

    vector<int> result(n);
    for (int i = n - 1; i >= 0; i--) {
      while (s.size() && T[s.top()] <= T[i])
        s.pop();

      result[i] = s.size() ? s.top() - i : 0;

      s.push(i);
    }
    return result;
  }
};
