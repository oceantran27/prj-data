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
  bool isMatch(const char *s, const char *p) {
    if ('\0' == *p) {
      return '\0' == *s;
    }

    if ('*' == *(p + 1)) {
      while ((*s != '\0') && ((*s == *p) || ('.' == *p))) {
        if (isMatch(s, p + 2)) {
          return true;
        }

        ++s;
      }

      return isMatch(s, p + 2);
    }
    else {
      if ((*s != '\0') && ((*s == *p) || ('.' == *p))) {
        return isMatch(s + 1, p + 1);
      }
    }

    return false;
  }
};