#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/stone-game-iv

class Solution {
 public:
  bool winnerSquareGame(int n) {
    vector<char> win(n + 1);
    for (int i = 0; i < n; ++i) {
      if (win[i]) continue;
      for (int j = 1; j * j + i <= n; ++j) win[j * j + i] = 1;
    }
    return win[n];
  }
};
