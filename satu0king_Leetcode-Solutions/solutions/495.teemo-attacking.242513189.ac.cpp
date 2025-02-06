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
  int findPoisonedDuration(vector<int> &timeSeries, int duration) {
    int time = 0;
    int lastPoisoned = 0;
    for (int n : timeSeries) {
      time += duration - max(lastPoisoned - n, 0);
      lastPoisoned = n + duration;
    }
    return time;
  }
};
