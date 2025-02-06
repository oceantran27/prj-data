#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 557 Reverse Words in a String III.cpp

class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0, l = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                int r = i - 1;
                while (l < r) {
                    swap(s[l++], s[r--]);
                }
                l = i + 1;
            }
        }
        return s;
    }
};