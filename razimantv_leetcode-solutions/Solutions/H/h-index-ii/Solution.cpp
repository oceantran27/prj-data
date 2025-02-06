#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/h-index-ii

class Solution {
 public:
  int hIndex(vector<int>& citations) {
    if (citations.empty() or citations.back() == 0) return 0;

    int N = citations.size(), start = 0, end = N + 1;
    // invariant: start <= H < end
    while (end - start > 1) {
      int mid = (end + start) >> 1;
      if (citations[N - mid] >= mid)
        start = mid;
      else
        end = mid;
    }
    return start;
  }
};
