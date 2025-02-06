#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximize-number-of-nice-divisors

class Solution {
 public:
  const int MOD = 1'000'000'007;
  long long modpow(long long a, long long b) {
    long long ret = 1;
    while (b) {
      if (b & 1) ret = (ret * a) % MOD;
      a = (a * a) % MOD;
      b >>= 1;
    }
    return ret;
  }

  int maxNiceDivisors(int primeFactors) {
    if (primeFactors < 5) return primeFactors;
    int ret = 1;
    if (primeFactors % 3 == 1)
      ret = 4, primeFactors -= 4;
    else if (primeFactors % 3 == 0)
      ret = 3, primeFactors -= 3;
    else
      ret = primeFactors % 3, primeFactors -= ret;

    return (ret * modpow(3, primeFactors / 3)) % MOD;
  }
};
