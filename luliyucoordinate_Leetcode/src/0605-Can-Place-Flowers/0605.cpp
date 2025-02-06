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
  bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int m = flowerbed.size();
    for (int i = 0; i < m; ++i) {
      if (flowerbed[i] == 0 && (i + 1 == m || flowerbed[i + 1] == 0)) {
        n--;
        i++;
      } else if (flowerbed[i] == 1) {
        i++;
      }
    }
    return n <= 0;
  }
};