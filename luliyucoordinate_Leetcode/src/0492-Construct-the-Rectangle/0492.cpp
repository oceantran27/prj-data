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
  vector<int> constructRectangle(int area) {
    int w = sqrt(area);
    while (area % w) {
      --w;
    }
    return {area / w, w};
  }
};