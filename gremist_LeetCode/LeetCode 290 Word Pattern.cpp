#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 290 Word Pattern.cpp

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, int> pm;
        unordered_map<string, int> sm;
        istringstream iss(str);
        int i = 0, ps = pattern.size();
        for (string word; iss >> word; i++) {
            if (i >= ps || pm[pattern[i]] != sm[word]) {
                return false;
            }
            pm[pattern[i]] = i + 1;
            sm[word] = i + 1;
        }
        return i >= ps;
    }
};