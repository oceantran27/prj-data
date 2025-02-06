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
  int findNumbers(vector<int> &nums) {
    int ans = 0;
    for (int n : nums) {
      if (n < 10)
        continue;
      else if (n < 100)
        ans++;
      else if (n < 1000)
        continue;
      else if (n < 10000)
        ans++;
      else if (n < 100000)
        continue;
      else if (n < 1000000)
        ans++;
    }
    return ans;
  }
};
