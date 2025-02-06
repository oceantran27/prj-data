#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/fizz-buzz

class Solution {
 public:
  vector<string> fizzBuzz(int n) {
    vector<string> ret(n);
    for (int i = 1; i <= n; ++i)
      if (i % 15 == 0)
        ret[i - 1] = "FizzBuzz";
      else if (i % 3 == 0)
        ret[i - 1] = "Fizz";
      else if (i % 5 == 0)
        ret[i - 1] = "Buzz";
      else
        ret[i - 1] = to_string(i);
    return ret;
  }
};
