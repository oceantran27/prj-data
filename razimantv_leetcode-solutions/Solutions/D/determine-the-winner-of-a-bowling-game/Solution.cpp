#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/determine-the-winner-of-a-bowling-game/

class Solution {
 public:
  int score(vector<int>& player) {
    int ret{};
    for (int i = 0, n = player.size(), ten = 0; i < n; ++i) {
      ret += (1 + (ten > 0)) * player[i];
      ten += (player[i] == 10);
      if (i > 1) ten -= (player[i - 2] == 10);
    }
    return ret;
  }
  int isWinner(vector<int>& player1, vector<int>& player2) {
    int s1 = score(player1), s2 = score(player2);
    if (s1 == s2)
      return 0;
    else if (s1 > s2)
      return 1;
    else
      return 2;
  }
};
