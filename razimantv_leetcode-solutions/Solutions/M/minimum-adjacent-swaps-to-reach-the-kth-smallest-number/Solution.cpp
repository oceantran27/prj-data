#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-adjacent-swaps-to-reach-the-kth-smallest-number

class Solution {
 public:
  int getMinSwaps(string num, int k) {
    auto newnum = num;
    for (int i = 0; i < k; ++i) next_permutation(newnum.begin(), newnum.end());

    int N = num.size(), ret = 0;
    vector<int> val(N);
    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        if (num[j] == newnum[i]) {
          val[i] = j;
          num[j] = 'a';
          break;
        }
      }
    }

    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < i; ++j) {
        if (val[i] < val[j]) ++ret;
      }
    }
    return ret;
  }
};
