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
  string removeKdigits(string num, int k) {

    string s;
    for (int i = 0; i < num.size(); i++) {
      while (s.size() && s.back() > num[i] && k) {
        s.pop_back();
        k--;
      }
      s += num[i];
    }

    while (k && s.size()) {
      s.pop_back();
      k--;
    }

    for (int i = 0; i < s.size(); i++) {
      if (s[i] != '0') {
        return s.substr(i);
      }
    }

    return "0";
  }
};
