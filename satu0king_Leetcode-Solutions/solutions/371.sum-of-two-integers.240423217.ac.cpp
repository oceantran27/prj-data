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
  int getSum(int a, int b) {
    while (a & b) {
      int t = a & b;
      a = a ^ b;
      b = (unsigned int)t << 1;
    }
    return a | b;
  }
};
