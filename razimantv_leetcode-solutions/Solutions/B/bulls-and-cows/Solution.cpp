#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/bulls-and-cows

class Solution {
 public:
  string getHint(string secret, string guess) {
    int excess[10] = {0}, bulls = 0, cows = 0, N = secret.size();
    for (int i = 0; i < N; i++) {
      if (secret[i] == guess[i])
        ++bulls;
      else {
        if (excess[secret[i] - '0']++ < 0) ++cows;
        if (excess[guess[i] - '0']-- > 0) ++cows;
      }
    }
    return to_string(bulls) + "A" + to_string(cows) + "B";
  }
};
