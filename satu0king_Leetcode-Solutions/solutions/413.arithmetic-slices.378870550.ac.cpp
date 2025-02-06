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
  int numberOfArithmeticSlices(vector<int> &A) {

    int n = A.size();
    int ans = 0;

    int c = 0;
    for (int i = 2; i < n; i++) {
      if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
        ans += ++c;
      } else
        c = 0;
    }

    return ans;
  }
};
