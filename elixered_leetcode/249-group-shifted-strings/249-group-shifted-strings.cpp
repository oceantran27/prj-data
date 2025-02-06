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
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string,vector<string>> mp;
        for(auto s:strings){
            string t = s;
            int diff = (s[0]-'a');
            for(int i=0; i<s.size(); ++i)
                s[i] = 'a' + (s[i]-diff+26)%26;
            mp[s].push_back(t);
        }
        vector<vector<string>> ans;
        for(auto it:mp)
            ans.push_back(it.second);
        return ans;
    }
};