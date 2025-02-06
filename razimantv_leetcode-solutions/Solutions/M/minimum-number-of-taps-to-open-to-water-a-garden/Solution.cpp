#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/

class Solution {
 public:
  // ChatGPT solution
  int minTaps(int n, vector<int>& ranges) {
    vector<pair<int, int>> intervals;

    // Convert the tap's coverage to intervals
    for (int i = 0; i <= n; ++i) {
      int left = max(0, i - ranges[i]);
      int right = min(n, i + ranges[i]);
      intervals.push_back({left, right});
    }

    // Sort the intervals based on their starting points
    sort(intervals.begin(), intervals.end());

    int minTaps = 0;
    int currEnd = 0;
    int nextEnd = 0;
    int i = 0;

    while (i <= n && currEnd < n) {
      // Find the farthest end within the current range
      while (i <= n && intervals[i].first <= currEnd) {
        nextEnd = max(nextEnd, intervals[i].second);
        ++i;
      }

      // If the current end is not updated, it means no tap can cover the
      // current range
      if (currEnd == nextEnd) {
        return -1;
      }

      currEnd = nextEnd;
      ++minTaps;
    }

    return minTaps;
  }
};
