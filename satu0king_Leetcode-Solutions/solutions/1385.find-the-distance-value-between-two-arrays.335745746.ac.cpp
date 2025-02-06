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
  int findTheDistanceValue(vector<int> &A, vector<int> &B, int d) {
    int ans = 0;
    for (int i = 0; i < A.size(); ++i) {
      bool found = false;
      for (int j = 0; j < B.size() && !found; ++j) {
        if (abs(A[i] - B[j]) <= d)
          found = true;
      }
      if (!found)
        ++ans;
    }
    return ans;
  }
};
