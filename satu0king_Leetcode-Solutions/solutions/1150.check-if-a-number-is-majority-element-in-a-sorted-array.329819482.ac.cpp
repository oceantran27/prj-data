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
  bool isMajorityElement(vector<int> &n, int t) {
    return upper_bound(begin(n), end(n), t) - lower_bound(begin(n), end(n), t) >
           n.size() / 2;
  }
};
