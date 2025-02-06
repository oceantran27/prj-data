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
  int maxSatisfaction(vector<int> &satisfaction) {
    sort(satisfaction.rbegin(), satisfaction.rend());

    int ans = 0;
    int t = 0;
    int s = 0;
    for (int dish : satisfaction) {
      t += dish;
      s += t;
      ans = max(ans, s);
    }
    return ans;
  }
};
