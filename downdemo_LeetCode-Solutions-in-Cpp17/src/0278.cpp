#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
 public:
  int firstBadVersion(int n) {
    int l = 1;
    int r = n;
    while (l <= r) {
      int m = l + (r - l) / 2;
      if (isBadVersion(m)) {
        r = m - 1;
      } else {
        l = m + 1;
      }
    }
    return l;
  }
};