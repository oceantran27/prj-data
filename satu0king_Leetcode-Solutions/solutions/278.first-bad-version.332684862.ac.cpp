#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
  int firstBadVersion(int n) {
    int ans = 0;
    long long l = 1;
    long long r = n;
    while (l <= r) {
      int m = (l + r) / 2;
      if (isBadVersion(m)) {
        ans = m;
        r = m - 1;
      } else
        l = m + 1;
    }

    return ans;
  }
};
