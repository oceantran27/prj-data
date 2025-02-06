#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0, digit = 0;
        for (const auto& c : abbr) {
            if (isdigit(c)) {
                if (digit == 0 && c == '0') {
                    return false;
                } 
                digit *= 10;
                digit += c - '0';
            } else {
                if (digit) {
                    i += digit;
                    digit = 0;
                }
                if (i >= word.length() || word[i++] != c) {
                    return false;
                }
            }
        }
        if (digit) {
            i += digit;
        }
        return i == word.length();
    }
};
