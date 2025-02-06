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
  int removePalindromeSub(string s) {
    int n = s.size();
    if (!n)
      return 0;
    for (int i = 0; i < n; i++)
      if (s[i] != s[n - i - 1])
        return 2;
    return 1;
  }
};
