#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Name : Karthik S
// Date : 03 October 2022

class Solution {
  public:
    vector < int > canSeePersonsCount(vector < int > & heights) {
      int n = heights.size();
      vector < int > res(n, 0);

      stack < int > stk;

      for (int i = n - 1; i >= 0; i--) {
        int height = heights[i];
        int visible = 0;

        while (!stk.empty() && height > stk.top()) {
          visible += 1;
          stk.pop();
        }

        if (!stk.empty()) {
          visible += 1;
        }
        res[i] = visible;
        stk.push(height);
      }
      return res;
    }
};
