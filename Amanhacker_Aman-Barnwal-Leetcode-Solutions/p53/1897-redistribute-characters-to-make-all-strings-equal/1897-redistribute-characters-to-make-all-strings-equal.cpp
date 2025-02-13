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
    
    bool makeEqual(vector<string>& words) {
    
        unordered_map<char, int> u;
        int n = words.size();
        
        for(auto &x : words) {
            for(auto &x1 : x)                           u[x1]++;
        }
        
        for(auto &x : u) {
            int freq = x.second;
            if(freq % n != 0)                           return false;
        }
        
        return true;
    }
    
};