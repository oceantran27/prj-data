#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 844 Backspace String Compare.cpp

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return parStr(S) == parStr(T);
    }

private:
    string parStr(string s) {
        int len = 0;
        for (char ch : s) {
            if (ch == '#' && len > 0) {
                len--;
            } else if (islower(ch)) {
                s[len++] = ch;
            }
        }
        return s.substr(0, len);
    }
};