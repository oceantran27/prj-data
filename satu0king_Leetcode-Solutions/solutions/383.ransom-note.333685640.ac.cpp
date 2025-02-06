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
  bool canConstruct(string ransomNote, string magazine) {
    vector<int> mp(256);
    for (char c : magazine)
      mp[c]++;
    for (char c : ransomNote)
      if (mp[c]-- == 0)
        return false;

    return true;
  }
};
