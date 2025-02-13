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
    
    int minCost(string a, vector<int>& neededTime) {
    
        int time = 0;
        int n = a.size();

        time = neededTime[0];
        int maxCost = neededTime[0];
        
        for(int i=1; i<n; i++) {
            
            if(a[i] != a[i-1]) {
                time -= maxCost;
                maxCost = 0;
            }
            
            time += neededTime[i];
            maxCost = max(maxCost, neededTime[i]);
        }
        
        return time - maxCost;
    }
    
};