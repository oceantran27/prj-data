#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

class Solution {
 public:
  char nextGreatestLetter(vector<char>& letters, char target) {
    auto vit = upper_bound(letters.begin(), letters.end(), target);
    return vit == letters.end() ? letters[0] : *vit;
  }
};
