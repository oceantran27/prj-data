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
  bool isPalindrome(string s) {
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
      while (l < r && !isalnum(s[l])) {
        ++l;
      }
      while (l < r && !isalnum(s[r])) {
        --r;
      }
      if (toupper(s[l]) == toupper(s[r])) {
        ++l;
        --r;
      } else {
        return false;
      }
    }
    return true;
  }
};
