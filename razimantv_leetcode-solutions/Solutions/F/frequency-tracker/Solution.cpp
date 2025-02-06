#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/frequency-tracker/

class FrequencyTracker {
 public:
  unordered_map<int, int> cnt, fcnt;
  FrequencyTracker() {}

  void add(int number) {
    if (cnt[number]) --fcnt[cnt[number]];
    ++fcnt[++cnt[number]];
  }

  void deleteOne(int number) {
    if (cnt[number]) {
      --fcnt[cnt[number]];
      if (--cnt[number]) ++fcnt[cnt[number]];
    }
  }

  bool hasFrequency(int frequency) { return fcnt[frequency]; }
};
