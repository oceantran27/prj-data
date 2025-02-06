#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
// https://leetcode.com/problems/split-a-string-in-balanced-strings/
class Solution {
public:
    int balancedStringSplit(string s) {
        int ls = s.size();
        int i;
        int balance = 0;
        int count = 0;
        for (i = 0; i < ls; ++i) {
            if (s[i] == 'L') {
                --balance;
            } else if (s[i] == 'R') {
                ++balance;
            }
            if (balance == 0) {
                ++count;
            }
        }
        return count;
    }
};
