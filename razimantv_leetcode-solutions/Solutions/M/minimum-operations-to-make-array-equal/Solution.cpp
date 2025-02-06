#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-make-array-equal

class Solution {
 public:
  int minOperations(int n) { return (n - n / 2) * (n / 2); }
};
