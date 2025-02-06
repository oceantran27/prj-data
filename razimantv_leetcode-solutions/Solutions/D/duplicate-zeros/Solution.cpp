#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/duplicate-zeros

class Solution {
 public:
  void duplicateZeros(vector<int>& arr) {
    for (int i = 0, N = arr.size(); i < N; ++i)
      if (arr[i] == 0) arr.insert(arr.begin() + i++, 0), arr.pop_back();
  }
};
