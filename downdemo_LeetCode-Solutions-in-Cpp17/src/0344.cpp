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
  void reverseString(vector<char>& s) {
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
      swap(s[l++], s[r--]);
    }
  }
};
