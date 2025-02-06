#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/h-index

class Solution {
 public:
  int hIndex(vector<int>& citations) {
    int start = 0, end = citations.size() + 1;
    while (end - start > 1) {
      int mid = (start + end) / 2, cnt = 0;
      for (int c : citations)
        if (c >= mid and ++cnt == mid) break;
      (cnt == mid ? start : end) = mid;
    }
    return start;
  }
};
