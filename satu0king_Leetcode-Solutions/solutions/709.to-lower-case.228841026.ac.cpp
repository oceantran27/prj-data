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
  string toLowerCase(string str) {
    for (auto &c : str) {
      if (c <= 'Z' && c >= 'A')
        c = c - 'A' + 'a';
    }
    return str;
  }
};
