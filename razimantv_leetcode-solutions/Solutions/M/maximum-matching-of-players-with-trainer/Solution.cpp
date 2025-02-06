#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-matching-of-players-with-trainer

class Solution {
 public:
  int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());
    int p = players.size(), t = trainers.size(), answer = 0;
    for (int i = 0, j = 0; i < t and j < p; ++i)
      if (players[j] <= trainers[i]) ++j, ++answer;
    return answer;
  }
};
