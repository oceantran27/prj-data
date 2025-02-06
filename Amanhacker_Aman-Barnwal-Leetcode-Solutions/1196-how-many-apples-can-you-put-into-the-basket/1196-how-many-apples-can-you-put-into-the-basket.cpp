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
   
    int maxNumberOfApples(vector<int>& a) {
        
        int res = 0;
        int n = a.size();
        
        sort(a.begin(), a.end());
        int sum = 0;
        
        for(auto &x : a) {
            
            sum += x;
            
            if(sum <= 5000)                                 res++;
            else                                            break;
        }
        
        return res;
    }
    
};