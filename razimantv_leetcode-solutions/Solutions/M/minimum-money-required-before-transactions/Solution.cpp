#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-money-required-before-transactions/

class Solution {
 public:
  long long minimumMoney(vector<vector<int>>& transactions) {
    long long bad{}, answer{};
    for (auto& t : transactions) {
      if (t[0] > t[1]) bad += t[0] - t[1];
    }

    for (auto& t : transactions) {
      long long current = bad;
      if (t[0] > t[1]) current -= t[0] - t[1];
      answer = max(answer, current + t[0]);
    }
    return answer;
  }
};
