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
  int minSwaps(vector<int> &data) {
    int n = data.size();
    int k = accumulate(data.begin(), data.end(), 0);
    int s = accumulate(data.begin(), data.begin() + k, 0);
    int ans = s;
    for (int i = k; i < n; i++) {
      if (data[i])
        s++;
      if (data[i - k])
        s--;
      ans = max(ans, s);
    }

    return k - ans;
  }
};
