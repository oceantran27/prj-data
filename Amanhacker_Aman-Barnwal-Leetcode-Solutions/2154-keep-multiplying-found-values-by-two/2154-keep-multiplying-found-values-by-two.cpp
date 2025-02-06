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
    
    int findFinalValue(vector<int>& a, int orig) {
    
        int n = a.size();
        
        while(true) {

            auto it = find(a.begin(), a.end(), orig);
    
            if(it != a.end())                       orig *= 2;
            else                                    break;
        }
        
        return orig;
    }
    
};