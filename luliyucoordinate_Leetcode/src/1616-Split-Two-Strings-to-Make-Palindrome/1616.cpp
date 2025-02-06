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
  bool checkPalindromeFormation(string &a, string &b) {
    return check(a, b) || check(b, a);
  }

 private:
  bool isPalindrome(string &s, int i, int j) {
    while (i < j && s[i] == s[j]) ++i, --j;
    return i >= j;
  }

  bool check(string &a, string &b) {
    int i = 0, j = a.length() - 1;
    while (i < j && a[i] == b[j]) ++i, --j;
    return isPalindrome(a, i, j) || isPalindrome(b, i, j);
  }
};
