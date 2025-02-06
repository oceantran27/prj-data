#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Author: Timon Cui, timonbaby@163.com

Title: Regular Expression Matching

Description:
Implement regular expression matching with support for '.' and '*'.

'.' Matches any single character.
'*' Matches zero or more of the preceding element.

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a")  false
isMatch("aa","aa")  true
isMatch("aaa","aa")  false
isMatch("aa", "a*")  true
isMatch("aa", ".*")  true
isMatch("ab", ".*")  true
isMatch("aab", "c*a*b")  true

Difficulty rating:

Source:
http://www.leetcode.com/onlinejudge
http://www.leetcode.com/2011/09/regular-expression-matching.html

Notes:

*/
class Solution {
public:
    bool isMatch(const char *s, const char *p) {
        int nS = strlen(s), nP = strlen(p);
        if (nP == 0) return nS == 0;
        if (nP == 1 || p[1] != '*') {
            return nS >= 1 && isMatch(s[0], p[0]) && isMatch(s + 1, p + 1);
        }   
        if (isMatch(s, p + 2)) return true;
        int i = 0;
        while (i < nS && isMatch(s[i], p[0])) {
            i ++;
            if (isMatch(s + i, p + 2)) return true;
        }
        return false;
    }
private:
    bool isMatch(char s, char p) { return p == '.' || p == s; }
};