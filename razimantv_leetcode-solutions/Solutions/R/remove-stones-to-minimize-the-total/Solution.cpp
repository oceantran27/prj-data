#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-stones-to-minimize-the-total/

class Solution {
 public:
  int minStoneSum(vector<int>& piles, int k) {
    multiset<int, greater<int>> s;
    for (int x : piles) s.insert(x);

    while (k--) {
      int u = *s.begin();
      s.erase(s.begin());
      s.insert(u - u / 2);
    }

    return accumulate(s.begin(), s.end(), 0);
  }
};
