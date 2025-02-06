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
  vector<int> numSmallerByFrequency(vector<string> &queries,
                                    vector<string> &words) {

    vector<int> cnt(11, 0), res;
    for (auto &w : words)
      for (int i = f(w) - 1; i >= 0; --i)
        ++cnt[i];
    for (auto &q : queries)
      res.push_back(cnt[f(q)]);
    return res;
  }

  int f(string &w) {
    return count(begin(w), end(w), *min_element(begin(w), end(w)));
  }
};
