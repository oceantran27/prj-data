#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  bool reorderedPowerOf2(int N) {
    unordered_set<string> possibilities;
    for (int i = 0; i < 31; i++) {
      auto s = to_string(1 << i);
      sort(s.begin(), s.end());
      possibilities.insert(s);
    }
    auto s = to_string(N);
    sort(s.begin(), s.end());
    return possibilities.count(s);
  }
};
