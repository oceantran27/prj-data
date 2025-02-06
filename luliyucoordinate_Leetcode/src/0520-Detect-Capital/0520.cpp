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
  bool detectCapitalUse(string word) {
    int n = word.size(), capitals = 0;
    bool first = false;
    if (word[0] < 97) {
      first = true;
      capitals++;
    }
    for (int i = 1; i < n; i++) {
      if (word[i] < 97) capitals++;
    }
    return capitals == 0 || (capitals == 1 && first == true) || capitals == n;
  }
};