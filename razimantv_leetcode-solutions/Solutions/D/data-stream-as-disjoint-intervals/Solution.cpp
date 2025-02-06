#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/data-stream-as-disjoint-intervals/

class SummaryRanges {
 public:
  vector<vector<int>> ranges;
  SummaryRanges() {}

  void addNum(int value) {
    vector<int> temp{value, value};

    auto vit = upper_bound(ranges.begin(), ranges.end(), temp);
    bool flag{};
    if (vit != ranges.end() and (*vit)[0] <= value + 1) {
      (*vit)[0] = value;
      flag = true;
    }

    if (vit != ranges.begin()) {
      auto vit2 = vit;
      --vit2;
      if ((*vit2)[1] == value - 1) {
        (*vit2)[1] = value;
        flag = true;
      } else if ((*vit2)[1] >= value)
        flag = true;
      if (vit != ranges.end() and (*vit2)[1] >= (*vit)[0] - 1) {
        (*vit2)[1] = (*vit)[1];
        ranges.erase(vit);
      }
    }

    if (!flag) ranges.insert(vit, temp);
  }

  vector<vector<int>> getIntervals() { return ranges; }
};
