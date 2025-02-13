#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class DSU {
  vector<int> par, rank;
  int n;

 public:
  DSU(int n) {
    this->par.resize(n);
    this->rank.resize(n);
    this->n = n;
    for (int i = 0; i < n; i++) par[i] = i;
  }
};

class Solution {
 public:
  vector<int> spf;
  vector<int> getAllFactors(int x) {
    vector<int> factors;
    while (x > 1) {
      factors.push_back(spf[x]);
      x /= spf[x];
    }
    return factors;
  }
  void sieve(int n) {
    spf.resize(n);
    for (int i = 2; i < n; i++) spf[i] = i;
    for (int i = 2; i * i < n; i++) {
      if (spf[i] == i) {
        for (int j = i * i; j < n; j += i) {
          if (spf[j] > i) spf[j] = i;
        }
      }
    }
  }
};
