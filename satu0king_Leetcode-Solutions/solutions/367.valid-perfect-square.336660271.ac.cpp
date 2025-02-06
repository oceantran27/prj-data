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
  bool isPerfectSquare(int num) {
    int sq = sqrt(num);
    return sq * sq == num;
  }
};
