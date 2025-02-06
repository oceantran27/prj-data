#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/counting-elements

class Solution {
 public:
  int countElements(vector<int>& arr) {
    set<int> s;
    for (int n : arr) s.insert(n);
    int ret = 0;
    for (int n : arr)
      if (s.count(n + 1)) ret++;
    return ret;
  }
};
