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
    vector<string> anagrams(vector<string> &strs) {
        /* https://oj.leetcode.com/problems/anagrams/
        ["abc", "ef", "cba", "xy", "yx"]  ->  ["abc", "cba", "xy", "yx"]
        the order doesn't matter
        */
        
        vector<string> result;
        unordered_map<string, string> dict;
        
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            if (dict.find(s) == dict.end()) {
                dict[s] = strs[i];
            }
            else {
                if (dict[s] != "#") {
                    result.push_back(dict[s]);
                    dict[s] = "#";
                }
                result.push_back(strs[i]);
            }
        }
        
        return result;
    }
};