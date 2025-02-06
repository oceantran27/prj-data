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
  vector<int> singleNumber(vector<int> &nums) {
    long long int x = 0;
    for (int n : nums)
      x ^= n;
    long long i = x & (-x);
    int y = 0;
    for (int n : nums)
      if (n & i)
        y ^= n;
    return {y, x ^ y};
  }
};
