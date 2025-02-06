#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/interval-list-intersections

class Solution {
 public:
  vector<vector<int>> intervalIntersection(vector<vector<int>>& A,
                                           vector<vector<int>>& B) {
    vector<vector<int>> ret;
    int M = A.size(), N = B.size();
    for (int i = 0, j = 0; i < M and j < N;) {
      if (A[i][1] >= B[j][1]) {
        if (A[i][0] <= B[j][1]) ret.push_back({max(A[i][0], B[j][0]), B[j][1]});
        j++;
      } else {
        if (B[j][0] <= A[i][1]) ret.push_back({max(B[j][0], A[i][0]), A[i][1]});
        i++;
      }
    }
    return ret;
  }
};
