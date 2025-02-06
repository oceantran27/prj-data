#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/first-bad-version

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
 public:
  int firstBadVersion(int n) {
    long long start = 0, end = n;
    while (end - start > 1) {
      int mid = (end + start) >> 1;
      (isBadVersion(mid) ? end : start) = mid;
    }
    return end;
  }
};
