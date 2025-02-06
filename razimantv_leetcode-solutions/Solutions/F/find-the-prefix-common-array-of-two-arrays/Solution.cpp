#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/

class Solution {
 public:
  vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    unordered_map<int, int> cnt;
    vector<int> ret;
    for (int i = 0, n = A.size(), cur = 0; i < n; ++i) {
      for (int x : {A[i], B[i]})
        if (!(cnt[x] ^= 1)) ++cur;
      ret.push_back(cur);
    }
    return ret;
  }
};
