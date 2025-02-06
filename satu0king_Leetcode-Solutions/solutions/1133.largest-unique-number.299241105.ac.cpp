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
  int largestUniqueNumber(vector<int> &A) {
    map<int, int> mp;
    for (int a : A)
      mp[-a]++;

    for (auto p : mp)
      if (p.second == 1)
        return -p.first;
    return -1;
  }
};
