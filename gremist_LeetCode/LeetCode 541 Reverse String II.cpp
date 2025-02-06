#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 541 Reverse String II.cpp

class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int l = i, r = min(i + k, (int)s.size()) - 1;
            while (l < r) {
                swap(s[l++], s[r--]);
            }
        }
        return s;
    }
};