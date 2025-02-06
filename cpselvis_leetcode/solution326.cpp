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
  bool isPowerOfThree(int n) {
    while (n > 0 && n % 3 == 0)
    {
      n /= 3;
    }
    return n == 1;
  }
};
