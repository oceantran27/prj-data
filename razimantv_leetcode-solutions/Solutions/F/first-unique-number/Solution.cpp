#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/first-unique-number

class FirstUnique {
 public:
  map<int, int> postoval, valtopos;
  int next = 0;
  FirstUnique(vector<int>& nums) {
    postoval.clear();
    valtopos.clear();
    next = 0;
    for (auto n : nums) {
      add(n);
    }
  }

  int showFirstUnique() {
    if (postoval.empty()) return -1;
    return postoval.begin()->second;
  }

  void add(int n) {
    if (valtopos.count(n)) {
      if (postoval.count(valtopos[n])) postoval.erase(valtopos[n]);
    } else {
      postoval[valtopos[n] = next++] = n;
    }
  }
};

