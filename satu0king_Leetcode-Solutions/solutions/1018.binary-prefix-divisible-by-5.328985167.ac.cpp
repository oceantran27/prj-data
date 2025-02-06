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
  vector<bool> prefixesDivBy5(vector<int> &A) {
    vector<bool> ans;
    int running = 0;
    for (int a : A) {
      running *= 2;
      if (a)
        running++;
      running %= 5;
      ans.push_back(!running);
    }
    return ans;
  }
};
