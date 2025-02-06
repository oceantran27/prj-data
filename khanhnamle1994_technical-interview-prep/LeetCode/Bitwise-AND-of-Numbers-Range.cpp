#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.
// For example, given the range [5, 7], you should return 4.

int rangeBitwiseAnd(int m, int n) {
  while (m < n) {
    n = n & (n - 1);
  }
  return n;
}
