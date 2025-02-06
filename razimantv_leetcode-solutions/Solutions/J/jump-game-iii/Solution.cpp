#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/jump-game-iii

class Solution {
 public:
  bool canReach(vector<int>& arr, int u) {
    if (!arr[u])
      return true;
    else if (arr[u] < 0)
      return false;

    int j = arr[u];
    arr[u] = -j;

    if (u >= j and canReach(arr, u - j)) return true;
    if (u + j < arr.size() and canReach(arr, u + j)) return true;
    return false;
  }
};
