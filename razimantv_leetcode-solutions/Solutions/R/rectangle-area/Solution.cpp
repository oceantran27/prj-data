#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/rectangle-area/

class Solution {
 public:
  int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2,
                  int by2) {
    int ret = (ax2 - ax1) * (ay2 - ay1);
    ret += (bx2 - bx1) * (by2 - by1);
    int cx1 = max(ax1, bx1), cx2 = min(ax2, bx2), cy1 = max(ay1, by1),
        cy2 = min(ay2, by2);
    ret -= max(cx2 - cx1, 0) * max(cy2 - cy1, 0);
    return ret;
  }
};
