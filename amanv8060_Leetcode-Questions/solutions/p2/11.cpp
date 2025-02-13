#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#ifndef NULL
#define NULL 0
#endif

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
