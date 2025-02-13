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
    
    bool areOccurrencesEqual(string s) {
    
        set<int> w;
        int n = s.length();
        
        unordered_map<char, int> u;
        
        for(auto &x : s)                        u[x]++;
        for(auto &x : u)                        w.insert(x.second);
        
        return (w.size() <= 1);
    }
    
};
