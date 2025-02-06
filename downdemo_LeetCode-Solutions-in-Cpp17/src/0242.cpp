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
  bool isAnagram(string s, string t) {
    vector<int> v(26);
    for (auto& x : s) {
      ++v[x - 'a'];
    }
    for (auto& x : t) {
      --v[x - 'a'];
    }
    return all_of(v.begin(), v.end(), [](int x) { return !x; });
  }
};
