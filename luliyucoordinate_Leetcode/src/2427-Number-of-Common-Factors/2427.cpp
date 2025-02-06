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
  int commonFactors(int a, int b) {
    int c = gcd(a, b), res = 0, i = 1;
    for (; i * i < c; i++) {
      if (c % i == 0) {
        res += 2;
      }
    }
    if (i * i == c) res++;
    return res;
  }
};
