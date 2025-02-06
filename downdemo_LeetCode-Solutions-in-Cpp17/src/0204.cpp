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
  int countPrimes(int n) {
    if (n <= 2) {
      return 0;
    }
    vector<bool> isPrime(n, true);
    int cnt = 0;
    for (int i = 2; i < n; ++i) {
      if (isPrime[i]) {
        ++cnt;
        for (int j = i + i; j < n; j += i) {
          isPrime[j] = false;
        }
      }
    }
    return cnt;
  }
};
