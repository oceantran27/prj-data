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
  int fixedPoint(vector<int> &A) {

    int l = 0;
    int r = A.size() - 1;

    int ans = -1;
    while (l <= r) {
      int m = (l + r) / 2;
      if (A[m] < m)
        l = m + 1;
      else {
        ans = m;
        r = m - 1;
      }
    }

    if (~ans && A[ans] != ans)
      ans = -1;

    return ans;
  }
};
