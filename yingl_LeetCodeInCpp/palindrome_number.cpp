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
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }

    int y = x;
    int z = 0;

    while (y > 0) {
      z = z * 10 + (y % 10);
      y /= 10;
    }

    return z == x;
  }
};