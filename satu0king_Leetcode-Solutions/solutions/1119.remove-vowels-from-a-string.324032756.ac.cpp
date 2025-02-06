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
  string removeVowels(string S) {
    static const string vovels = "aeiou";
    string result;
    for (char c : S)
      if (vovels.find(c) == -1)
        result += c;

    return result;
  }
};
