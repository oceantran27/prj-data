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

  multiset<pair<int, int>> capitalHeap;
  multiset<int> profitHeap;

public:
  int findMaximizedCapital(int k, int W, vector<int> &Profits,
                           vector<int> &Capital) {

    int n = Profits.size();

    for (int i = 0; i < n; i++)
      capitalHeap.emplace(Capital[i], Profits[i]);

    while (k) {

      while (capitalHeap.size() && capitalHeap.begin()->first <= W) {
        profitHeap.insert(capitalHeap.begin()->second);
        capitalHeap.erase(capitalHeap.begin());
      }

      if (profitHeap.size()) {
        int p = *profitHeap.rbegin();
        W += max(0, p);
        profitHeap.erase(profitHeap.find(p));
      }

      k--;
    }

    return W;
  }
};
