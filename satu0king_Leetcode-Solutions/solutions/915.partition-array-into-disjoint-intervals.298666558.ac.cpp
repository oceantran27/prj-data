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
  int partitionDisjoint(vector<int> &A) {
    int n = A.size();
    vector<int> B(n);
    B[0] = A[0];
    for (int i = 1; i < n; i++)
      B[i] = max(B[i - 1], A[i]);

    int mn = INT_MAX;

    int ans = 0;
    for (int i = n - 1; i > 0; i--) {
      mn = min(mn, A[i]);
      if (B[i - 1] <= mn)
        ans = i;
    }
    return ans;
  }
};
