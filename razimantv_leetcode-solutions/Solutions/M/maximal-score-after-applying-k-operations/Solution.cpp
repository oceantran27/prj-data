#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximal-score-after-applying-k-operations/

class Solution {
 public:
  long long maxKelements(vector<int>& nums, int k) {
    multiset<int, greater<int>> ms;
    for (int x : nums) ms.insert(x);
    long long ret{};
    for (int i = 0; i < k; ++i) {
      int u = *ms.begin();
      ms.erase(ms.begin());
      ret += u;
      ms.insert((u + 2) / 3);
    }
    return ret;
  }
};
