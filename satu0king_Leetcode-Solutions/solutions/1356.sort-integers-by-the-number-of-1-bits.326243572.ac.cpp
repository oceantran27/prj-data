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
  vector<int> sortByBits(vector<int> &arr) {
    vector<int> c(10001);
    for (int i = 1; i < 10001; i++)
      c[i] = c[i & (i - 1)] + 1;
    auto cmp = [&](int i, int j) {
      if (c[i] != c[j])
        return c[i] < c[j];
      return i < j;
    };
    sort(arr.begin(), arr.end(), cmp);
    return arr;
  }
};
