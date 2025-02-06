#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-groups-entering-a-competition

class Solution {
 public:
  int maximumGroups(vector<int>& grades) {
    int x = 1, y = 1, n = grades.size();
    while (y <= n) y += ++x;
    return x - 1;
  }
};
