#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/determine-color-of-a-chessboard-square

class Solution {
 public:
  bool squareIsWhite(string c) { return ((c[0] - 'a') + (c[1] - '1')) & 1; }
};
