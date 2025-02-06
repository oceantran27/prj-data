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
  string restoreString(string s, vector<int> &indices) {
    string ans = string(s.size(), ' ');
    for (int i = 0; i < s.size(); i++)
      ans[indices[i]] = s[i];
    return ans;
  }
};
