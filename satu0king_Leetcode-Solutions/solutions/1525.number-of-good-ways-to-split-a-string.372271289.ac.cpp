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
  int numSplits(string s) {
    unordered_map<char, int> leftCount;
    unordered_map<char, int> rightCount;
    for (char c : s)
      rightCount[c]++;
    int ans = 0;
    for (int i = 0; i + 1 < s.size(); i++) {
      leftCount[s[i]]++;
      if (--rightCount[s[i]] == 0)
        rightCount.erase(s[i]);
      ans += leftCount.size() == rightCount.size();
    }
    return ans;
  }
};
