#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 49 Group Anagrams.cpp

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (string &str : strs) {
            string k = str;
            sort(k.begin(), k.end());
            m[k].push_back(str);
        }
        
        vector<vector<string>> ans;
        for (auto &[k, v] : m) {
            ans.push_back(v);
        }
        return ans;
    }
};