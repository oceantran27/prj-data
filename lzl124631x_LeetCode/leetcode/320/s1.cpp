#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/generalized-abbreviation/
// Author: github.com/lzl124631x
// Time: O(2^W * W)
// Space: O(W)
class Solution {
private:
    string encode(string word, int mask) {
        string ans;
        int cnt = 0;
        for (int i = 0; i < word.size(); ++i) {
            if (mask & (1 << i)) ++cnt;
            else {
                if (cnt) {
                    ans += to_string(cnt);
                    cnt = 0;
                }
                ans += word[i];
            }
        }
        if (cnt) ans += to_string(cnt);
        return ans;
    }
public:
    vector<string> generateAbbreviations(string word) {
        vector<string> ans;
        for (int i = 0; i < (1 << word.size()); ++i) ans.push_back(encode(word, i));
        return ans;
    }
};