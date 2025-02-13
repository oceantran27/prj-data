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
    
    bool canConstruct(string ransomNote, string magazine) {
    
        unordered_map<char, int> u;
        
        for(auto &x : magazine)                     u[x]++;
        
        for(auto &x : ransomNote) {
            if(u[x] >= 1)                           u[x]--;
            else                                    return false;
        }
        
        return true;
    }
    
};