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
  bool isValid(string S) {
    string s;

    for (char c : S) {
      s += c;
      while (s.size() >= 3 && s.substr(s.size() - 3, 3) == "abc") {
        s.pop_back();
        s.pop_back();
        s.pop_back();
      }
    }

    return s == "";
  }
};
