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
  int addDigits(int num) {
    if (!num) {
      return 0;
    }
    int res = num % 9;
    if (!res) {
      return 9;
    }
    return res;
  }
};
