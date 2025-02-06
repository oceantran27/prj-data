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
  int countAsterisks(string s) {
    int res = 0, n = s.size();
    for (int i = 0; i < n; i++) {
      if (s[i] == '|') {
        do {
          i++;
        } while (i < n && s[i] != '|');
      } else if (s[i] == '*')
        res++;
    }
    return res;
  }
};