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
  vector<int> deckRevealedIncreasing(vector<int> &deck) {
    deque<int> dq;
    int n = deck.size();
    for (int i = 0; i < n; i++)
      dq.push_back(i);

    vector<int> ans(n);
    vector<int> temp;

    while (dq.size()) {
      int front = dq.front();
      dq.pop_front();
      temp.push_back(front);
      if (dq.size()) {
        int front = dq.front();
        dq.pop_front();
        dq.push_back(front);
      }
    }

    sort(deck.begin(), deck.end());

    for (int i = 0; i < n; i++)
      ans[temp[i]] = deck[i];
    return ans;
  }
};
