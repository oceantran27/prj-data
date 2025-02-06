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
  int countOdds(int low, int high) {
    return (high - low) / 2 + (low & 1 || high & 1 ? 1 : 0);
  }
};