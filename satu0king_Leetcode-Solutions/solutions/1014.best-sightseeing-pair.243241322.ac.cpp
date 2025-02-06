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
  int maxScoreSightseeingPair(vector<int> &A) {

    int ans = 0;
    int mx = 0;
    int n = A.size();
    for (int i = 1; i < n; i++) {
      ans = max(A[mx] + A[i] + mx - i, ans);
      // cout<<i<<" "<<mx<<endl;
      if (A[mx] - (i - mx) < A[i])
        mx = i;
    }

    return ans;
  }
};
