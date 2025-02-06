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
  int heightChecker(vector<int> &heights) {
    vector<int> sortedHeights = heights;
    sort(sortedHeights.begin(), sortedHeights.end());
    int count = 0;
    for (int i = 0; i < sortedHeights.size(); i++)
      if (sortedHeights[i] != heights[i])
        count++;
    return count;
  }
};
