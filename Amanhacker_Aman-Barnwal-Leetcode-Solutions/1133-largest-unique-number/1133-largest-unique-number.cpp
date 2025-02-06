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
   
    int largestUniqueNumber(vector<int>& a) {
    
        int res = -1;
        
        int n = a.size();
        map<int, int> u;

        for(auto &x : a)                                u[x]++;
                
        for(auto it=u.begin(); it!=u.end(); it++) {
            
            if(it->second == 1) {
                res = it->first;
            }   
        }

        return res;
    }
    
};