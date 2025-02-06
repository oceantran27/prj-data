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
  int majorityElement(vector<int> &nums) {
    int prev = 0;
    int c = 0;
    for (int n : nums) {
      if (n == prev)
        c++;
      else if (c)
        c--;
      else {
        prev = n;
        c = 1;
      }
    }

    return prev;
  }
};
