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
  int calculateTime(string keyboard, string word) {
    unordered_map<char, int> mp;
    for (int i = 0; i < 26; i++)
      mp[keyboard[i]] = i;
    int ans = 0;
    int i = 0;
    for (char c : word) {
      ans += abs(i - mp[c]);
      i = mp[c];
    }

    return ans;
  }
};
