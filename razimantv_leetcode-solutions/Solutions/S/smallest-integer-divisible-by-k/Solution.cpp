#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/smallest-integer-divisible-by-k

class Solution {
 public:
  int smallestRepunitDivByK(int K) {
    if (K % 2 == 0 or K % 5 == 0) return -1;
    int ret = 0, cur = 0;
    do {
      ++ret;
      cur = (cur * 10 + 1) % K;
    } while (cur);
    return ret;
  }
};
