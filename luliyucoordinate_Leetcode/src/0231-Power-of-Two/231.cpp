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
  bool isPowerOfTwo(int n) {
    return n < 0 ? false : __builtin_popcountll(n) == 1;
  }
};