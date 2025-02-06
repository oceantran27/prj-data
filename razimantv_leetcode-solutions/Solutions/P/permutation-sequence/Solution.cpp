#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/permutation-sequence

class Solution {
 public:
  string getPermutation(int n, int k) {
    string ret;
    vector<int> fac = {1};
    set<int> rem = {n};
    for (int i = 1; i < n; i++) {
      fac.push_back(fac.back() * i);
      rem.insert(i);
    }

    k--;
    while (n--) {
      for (int m : rem) {
        if (k >= fac[n])
          k -= fac[n];
        else {
          ret += char('0' + m);
          rem.erase(m);
          break;
        }
      }
    }

    return ret;
  }
};
