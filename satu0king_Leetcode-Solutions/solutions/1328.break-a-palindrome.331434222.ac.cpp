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
  string breakPalindrome(string palindrome) {
    if (palindrome.size() < 2)
      return "";
    for (int i = 0; i < palindrome.size(); i++) {
      if (2 * i + 1 == palindrome.size())
        continue;
      if (palindrome[i] != 'a') {
        palindrome[i] = 'a';
        return palindrome;
      }
    }

    palindrome.back() = 'b';
    return palindrome;
  }
};
