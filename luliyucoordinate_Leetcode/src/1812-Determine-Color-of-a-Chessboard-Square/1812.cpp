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
  bool squareIsWhite(string coordinates) {
    return (coordinates[0] - 'a' + coordinates[1] - '1') & 1;
  }
};