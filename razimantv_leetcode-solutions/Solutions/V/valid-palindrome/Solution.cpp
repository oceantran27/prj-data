#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/valid-palindrome

class Solution {
 public:
  bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j;) {
      if (!isalnum(s[i]))
        i++;
      else if (!isalnum(s[j]))
        j--;
      else if (tolower(s[i++]) != tolower(s[j--]))
        return false;
    }
    return true;
  }
};
