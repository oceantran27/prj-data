#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-sorted-vowel-strings

class Solution {
 public:
  int countVowelStrings(int n) {
    return (n + 4) * (n + 3) * (n + 2) * (n + 1) / 24;
  }
};
