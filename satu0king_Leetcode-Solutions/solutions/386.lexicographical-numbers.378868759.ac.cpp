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
  vector<int> lexicalOrder(int n) {
    int current = 1;
    vector<int> res;
    int t = n;
    while (t--) {
      res.push_back(current);
      if (current * 10 <= n)
        current *= 10;
      else {
        if (current >= n)
          current /= 10;
        current++;
        while (current % 10 == 0)
          current /= 10;
      }
    }
    return res;
  }
};
