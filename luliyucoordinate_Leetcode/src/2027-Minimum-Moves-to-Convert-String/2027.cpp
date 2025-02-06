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
  int minimumMoves(string s) {
    int n = s.size();
    int res = 0, i = 0;
    while (i < n) {
      if (s[i] == 'X') {
        res++;
        i += 3;
      } else {
        i++;
      }
    }
    return res;
  }
};