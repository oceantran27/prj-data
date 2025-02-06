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
  string countAndSay(int n) {
    string ans = "1";

    while (--n) {
      string next;
      for (int i = 0; i < ans.length(); ++i) {
        int count = 1;
        while (i + 1 < ans.length() && ans[i] == ans[i + 1]) {
          ++count;
          ++i;
        }
        next += to_string(count) + ans[i];
      }
      ans = move(next);
    }

    return ans;
  }
};
