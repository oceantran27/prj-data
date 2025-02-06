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
  vector<string> getFolderNames(vector<string> &names) {
    unordered_map<string, int> mp;
    vector<string> ans;
    for (auto &s : names) {
      if (mp[s]++) {
        int c = mp[s] - 1;
        while (mp.count(s + "(" + to_string(c) + ")"))
          c++;
        mp[s] = c;
        s += "(" + to_string(c) + ")";
        mp[s]++;
      }
      ans.push_back(s);
    }
    return ans;
  }
};
