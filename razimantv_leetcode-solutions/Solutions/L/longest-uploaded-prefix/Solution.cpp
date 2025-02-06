#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-uploaded-prefix/

class LUPrefix {
 public:
  unordered_set<int> seen;
  int good;
  LUPrefix(int n) : good(0) {}

  void upload(int video) {
    seen.insert(video);
    if (video == 1 or good == video - 1) {
      while (seen.count(video)) good = video++;
    }
  }

  int longest() { return good; }
};

