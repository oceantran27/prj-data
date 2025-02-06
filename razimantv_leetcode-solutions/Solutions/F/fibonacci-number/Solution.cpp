#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/fibonacci-number

class Solution {
 public:
  int fib(int n) {
    int prev = 1, cur = 0;
    for (int i = 0; i < n; ++i) {
      prev += cur;
      swap(prev, cur);
    }
    return cur;
  }
};
