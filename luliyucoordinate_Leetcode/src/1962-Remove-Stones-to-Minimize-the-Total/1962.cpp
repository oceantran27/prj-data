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
  int minStoneSum(vector<int>& piles, int k) {
    make_heap(piles.begin(), piles.end());
    while (k--) {
      pop_heap(piles.begin(), piles.end());
      piles.back() = (piles.back() + 1) >> 1;
      push_heap(piles.begin(), piles.end());
    }
    return accumulate(piles.begin(), piles.end(), 0);
  }
};