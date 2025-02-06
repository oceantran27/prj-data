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
  int tribonacci(int n) {
    vector<int> v(38);
    v[0] = 0;
    v[1] = 1;
    v[2] = 1;
    for (int i = 3; i <= n; i++)
      v[i] += v[i - 1] + v[i - 2] + v[i - 3];

    return v[n];
  }
};
