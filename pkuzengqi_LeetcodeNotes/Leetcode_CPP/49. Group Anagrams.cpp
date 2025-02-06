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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dict;
        vector<vector<string>> res;
        
        for(auto &str:strs){
            string s = str;
            sort(s.begin(), s.end());
            dict[s].push_back(str);
        }
        
        for(auto i=dict.begin(); i!=dict.end(); ++i){
            res.push_back(i->second);
        }
        
        return res;
    }
};