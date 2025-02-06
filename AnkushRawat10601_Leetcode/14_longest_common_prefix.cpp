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
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (int len = 0; ; ++len) {
            char c = strs.front()[len];
            for (auto& s: strs)
                if (s.size() <= len || s[len] != c)
                    return strs.front().substr(0, len);
        }
    }
};