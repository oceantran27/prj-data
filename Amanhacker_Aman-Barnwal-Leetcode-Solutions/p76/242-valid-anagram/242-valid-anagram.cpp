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
    
    bool isAnagram(string s, string t) {
    
        if(s == t)                      return true;
        
        map<int, int> mp;
        
        for(auto &x : s)                mp[x]++;
        for(auto &x : t)                mp[x]--;
        
        for(auto &x : mp) {
            if(x.second > 0 || x.second < 0)      return false;
        }
        
        return true;
    }
    
};