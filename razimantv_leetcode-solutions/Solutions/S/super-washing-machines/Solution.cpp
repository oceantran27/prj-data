#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/super-washing-machines

class Solution {
 public:
  int findMinMoves(vector<int>& machines) {
    int n = machines.size(),
        tot = accumulate(machines.begin(), machines.end(), 0);
    if (tot % n) return -1;

    int avg = tot / n, ret = 0;
    for (int i = 0, mismatch = 0; i < n; ++i) {
      int newmismatch = mismatch + machines[i] - avg;
      if ((mismatch < 0) and (newmismatch > 0))
        ret = max(ret, abs(mismatch) + abs(newmismatch));
      else
        ret = max(ret, max(abs(mismatch), abs(newmismatch)));
      // cout << i << " " << machines[i] << " " << mismatch << " " <<
      // newmismatch << "\n";
      mismatch = newmismatch;
    }
    // cout << "\n";
    return ret;
  }
};
