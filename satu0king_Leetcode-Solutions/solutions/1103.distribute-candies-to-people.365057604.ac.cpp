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
  vector<int> distributeCandies(int c, int num) {
    vector<int> res(num);
    for (auto i = 0; c > 0; c -= ++i)
      res[i % num] += min(i + 1, c);
    return res;
  }
};
