#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int maxArea(vector<int>& height) {
    int s = 0;
    int e = height.size() - 1;

    int water = INT_MIN;
    while (s < e) {
      water = max(water, min(height[s], height[e]) * (e - s));

      if (height[s] < height[e])
        s++;
      else
        e--;
    }

    return water;
  }
};
