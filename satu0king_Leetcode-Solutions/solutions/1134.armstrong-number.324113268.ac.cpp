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
  bool isArmstrong(int N) {
    string s = to_string(N);
    for (char c : s)
      N -= pow(c - '0', s.size());

    return N == 0;
  }
};
