#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/smallest-even-multiple/

class Solution {
 public:
  int smallestEvenMultiple(int n) { return (n & 1) ? (n * 2) : n; }
};
