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
        unordered_map<string,vector<string>> ump;
        string tmp;
        for (string &i:strs) {
            tmp=i;
            sort(tmp.begin(),tmp.end());
            ump[tmp].push_back(i);
        }
        vector<vector<string>> ans;
        for (auto &i:ump) {
            ans.push_back(i.second);
        }
        return ans;
    }
};