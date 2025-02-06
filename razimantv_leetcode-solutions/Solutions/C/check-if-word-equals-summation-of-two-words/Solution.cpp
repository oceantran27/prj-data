#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words

class Solution {
 public:
  int val(const string& s) {
    int ret = 0;
    for (char c : s) ret = ret * 10 + c - 'a';
    return ret;
  }
  bool isSumEqual(string firstWord, string secondWord, string targetWord) {
    return val(firstWord) + val(secondWord) == val(targetWord);
  }
};
