#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/merge-strings-alternately/

class Solution {
 public:
  string mergeAlternately(string word1, string word2) {
    string ret;
    for (int i = 0, j = 0; word1[i] or word2[j];) {
      if (word1[i]) ret += word1[i++];
      if (word2[j]) ret += word2[j++];
    }
    return ret;
  }
};
