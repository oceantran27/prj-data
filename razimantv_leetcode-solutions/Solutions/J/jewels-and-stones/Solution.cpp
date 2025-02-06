#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/jewels-and-stones

class Solution {
 public:
  int numJewelsInStones(string J, string S) {
    char seen[256] = {0};
    for (auto c : J) seen[c] = 1;

    int tot = 0;
    for (auto c : S)
      if (seen[c]) tot++;
    return tot;
  }
};
