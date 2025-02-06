#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/flatten-nested-list-iterator

class NestedIterator {
 public:
  vector<int> cur;
  int pos = 0;
  void work(vector<NestedInteger> &nestedList) {
    for (auto &n : nestedList) {
      if (n.isInteger())
        cur.push_back(n.getInteger());
      else
        work(n.getList());
    }
  }
  NestedIterator(vector<NestedInteger> &nestedList) { work(nestedList); }

  int next() { return cur[pos++]; }

  bool hasNext() { return pos < cur.size(); }
};

