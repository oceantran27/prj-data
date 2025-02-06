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
  vector<int> getRow(int rowIndex) {
    vector<int> DP(rowIndex + 1);
    DP[0] = 1;
    while (rowIndex--) {
      for (int i = DP.size() - 1; i > 0; i--)
        DP[i] += DP[i - 1];
    }
    return DP;
  }
};
