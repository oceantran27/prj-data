#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/smallest-number-in-infinite-set

class SmallestInfiniteSet {
 public:
  set<int> added;
  int smallest;
  SmallestInfiniteSet() : smallest(1) {}

  int popSmallest() {
    if (!added.empty()) {
      int ret = *added.begin();
      added.erase(added.begin());
      return ret;
    }
    return smallest++;
  }

  void addBack(int num) {
    if (num >= smallest) return;
    added.insert(num);
  }
};

