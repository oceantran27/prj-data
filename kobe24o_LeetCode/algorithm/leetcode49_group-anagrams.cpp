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
        unordered_map<string,vector<string>> m;
        string sortStr;
        for(int i = 0; i < strs.size(); ++i)
        {
        	sortStr = strs[i];
        	sort(sortStr.begin(), sortStr.end());
        	m[sortStr].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it = m.begin(); it != m.end(); ++it)
        {
        	ans.push_back(it->second);
        }
        return ans;
    }
};