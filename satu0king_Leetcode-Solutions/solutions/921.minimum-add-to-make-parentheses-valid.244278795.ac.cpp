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
  int minAddToMakeValid(string S) {
    int open = 0;
    int ans = 0;

    for (char c : S)
      if (c == '(')
        open++;
      else if (c == ')' && open)
        open--;
      else
        ans++;

    return ans + open;
  }
};
