#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
 public:
  string convertToTitle(int n) {
    string s;
    while (n) {
      s += ('A' + (--n) % 26);
      n /= 26;
    }
    reverse(s.begin(), s.end());
    return s;
  }
};
