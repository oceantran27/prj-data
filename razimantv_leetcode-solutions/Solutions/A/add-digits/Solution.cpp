#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/add-digits

class Solution {
 public:
  int addDigits(int num) { return (num - 1) % 9 + 1; }
};
