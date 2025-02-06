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
  vector<int> arrayRankTransform(vector<int> &arr) {
    vector<int> A(arr);
    sort(A.begin(), A.end());
    unordered_map<int, int> rank;
    for (int &a : A)
      rank.emplace(a, rank.size() + 1);
    for (int &a : arr)
      a = rank[a];
    return arr;
  }
};
