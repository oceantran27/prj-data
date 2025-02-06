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
    
    string removeVowels(string s) {
    
        string res = "";
        
        unordered_map<char, int> mp;
        
        mp['a'] = 1;
        mp['e'] = 1;
        mp['i'] = 1;
        mp['o'] = 1;
        mp['u'] = 1;
        
        for(auto &x : s) {
            if(mp[x] == 0)                               res += x;
        }
        
        return res;
    }
    
};