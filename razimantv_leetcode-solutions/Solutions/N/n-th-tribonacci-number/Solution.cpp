#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
 public:
  int tribonacci(int n) {
    if (n < 2) return n;

    int a = 0, b = 1, c = 1;
    for (int i = 2; i < n; ++i) {
      a += b + c;
      swap(a, c);
      swap(a, b);
    }
    return c;
  }
};
