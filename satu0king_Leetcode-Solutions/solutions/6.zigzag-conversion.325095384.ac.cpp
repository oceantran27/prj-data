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
  string convert(string s, int numRows) {
    int i = 0;
    vector<string> temp(numRows);

    while (i < s.size()) {
      for (int j = 0; j < numRows && i < s.size(); j++)
        temp[j] += s[i++];

      for (int j = numRows - 2; j >= 1 && i < s.size(); j--)
        temp[j] += s[i++];
    }

    string result;
    for (auto &s : temp)
      result += s;
    return result;
  }
};
