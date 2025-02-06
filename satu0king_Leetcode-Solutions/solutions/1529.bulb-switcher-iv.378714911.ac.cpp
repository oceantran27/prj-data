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
  int minFlips(string target) {
    int ans = 0;
    int flip = 0;
    for (char c : target) {
      if (c - '0' != flip) {
        ans++;
        flip = (flip + 1) % 2;
      }
    }
    return ans;
  }
};
