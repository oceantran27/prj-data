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
  bool isPowerOfFour(int n) {
    while (n > 0 && n % 4 == 0)
      {
	n /= 4;
      }
    return n == 1;
  }
};
