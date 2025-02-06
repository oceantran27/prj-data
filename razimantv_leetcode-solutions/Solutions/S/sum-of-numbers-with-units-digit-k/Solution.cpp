#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-numbers-with-units-digit-k

class Solution {
 public:
  int minimumNumbers(int num, int k) {
    if (!num) return 0;
    if ((k % 2 == 0 and num % 2 != 0) or (k % 5 == 0 and num % 5 != 0))
      return -1;
    int cnt = 0, tot = 0;
    while (!cnt or tot % 10 != num % 10) cnt++, tot += k;
    if (tot <= num)
      return cnt;
    else
      return -1;
  }
};
