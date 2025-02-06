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
  void reverseWords(vector<char> &s) {
    reverse(s.begin(), s.end());
    for (int l = 0, r = 0; l < s.size(); l = r + 1) {
      for (r = l; r < s.size() && !isblank(s[r]); r++)
        ;
      reverse(s.begin() + l, s.begin() + r);
    }
  }
};
