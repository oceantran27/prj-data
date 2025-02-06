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
    int width = ceil(sqrt(area));
    while (area % width)
      width++;
    return vector<int>{width, area / width};
  }
};
