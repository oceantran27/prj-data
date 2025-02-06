#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-distinct-numbers-on-board/

class Solution {
 public:
  int distinctIntegers(int n) { return n - 1 + (n == 1); }
};
