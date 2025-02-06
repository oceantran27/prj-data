#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
 public:
  int removeDuplicates(vector<int>& ar) {
    if (ar.empty()) return 0;
    int p = 0;
    for (int c = 1, N = ar.size(); c < N; ++c)
      if (!p or ar[p - 1] < ar[c]) ar[++p] = ar[c];
    return p + 1;
  }
};
