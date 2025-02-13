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
    
    char repeatedCharacter(string s) {
    
        char res = 'a';
        int n = s.length();
        
        unordered_map<char, int> mp;
       
        for(auto &x : s) {
            mp[x]++;            
            if(mp[x] == 2)                 return x;
        }   
        
        return res;
    }
    
};