#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/design-memory-allocator/

class Allocator {
 public:
  int n;
  vector<int> used;
  Allocator(int n) : n(n) { used.resize(n); }

  int allocate(int size, int mID) {
    for (int i = 0; i < n;) {
      if (used[i]) {
        ++i;
        continue;
      }
      int j = i;
      while (j < n and !used[j] and j - i + 1 < size) ++j;
      if (j == n or used[j]) {
        i = j + 1;
        continue;
      }
      while (j >= i) used[j--] = mID;
      return i;
    }
    return -1;
  }

  int free(int mID) {
    int ret{};
    for (int& x : used)
      if (x == mID) x = 0, ++ret;
    return ret;
  }
};
