#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 205 Isomorphic Strings.cpp

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> sm(CHAR_MAX, -1), tm(CHAR_MAX, -1);
        for (int i = 0; i < s.size(); i++) {
            if (sm[s[i]] != tm[t[i]]) {
                return false;
            }
            sm[s[i]] = i;
            tm[t[i]] = i;
        }
        return true;
    }
};