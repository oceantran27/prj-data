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
  int bitwiseComplement(int N) {
    int n = 1;

    while ((n & N) != N)
      n = 2 * n + 1;

    return n ^ N;
  }
};
