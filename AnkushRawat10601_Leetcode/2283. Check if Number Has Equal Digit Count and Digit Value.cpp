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
    bool digitCount(string s) {
        unordered_map<char, int>mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        for(int i=0; i<s.size(); i++)
        {
            char c=i+'0';
            if(mp[c]!=s[i]-'0')
                return false;
        }
        
        return true;
    }
};