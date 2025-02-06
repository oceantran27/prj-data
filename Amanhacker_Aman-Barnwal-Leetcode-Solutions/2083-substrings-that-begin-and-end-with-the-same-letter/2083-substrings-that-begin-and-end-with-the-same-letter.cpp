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
  
    long long numberOfSubstrings(string s) {
    
        long long res = 0;
        int n = s.length();
        
        unordered_map<char, long long> mp;
        
        for(auto &x : s) {
            mp[x]++;
            res += mp[x];
        }           
        
        return res;
    }
    
};