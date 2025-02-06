#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/boats-to-save-people

class Solution {
 public:
  int numRescueBoats(vector<int>& people, int limit) {
    int ret = 0;
    sort(people.begin(), people.end());
    for (int i = 0, j = people.size() - 1; i <= j; ++ret, --j) {
      if (people[i] + people[j] <= limit) ++i;
    }
    return ret;
  }
};
