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
  int reachNumber(int target) {
    target = abs(target);
    int curr = 1;
    int sum = 0;
    int cnt = 0;
    while (sum < target) {
      sum += curr;
      curr++;
      cnt++;
    }

    int diff = sum - target;
    while (diff % 2 == 1) {
      sum += curr;
      cnt++;
      curr++;
      diff = sum - target;
    }

    return cnt;
  }
};
