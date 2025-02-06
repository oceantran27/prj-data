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
  int xorOperation(int n, int start) {
    int res = start;
    for (int i = 1; i < n; i++) {
      res = res ^ (start + 2 * i);
    }
    return res;
  }
};
