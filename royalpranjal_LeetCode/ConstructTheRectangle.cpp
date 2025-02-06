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
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        
        int diff = INT_MAX, l = -1, b = -1;
        
        for(int i = 1; i <= sqrt(area); i++){
            if(area%i == 0){
                int tl = i, tb = area/i;
                if(abs(tl-tb) < diff){
                    diff = abs(tl-tb);
                    l = tl; 
                    b = tb;
                }
            }
        }
        
        ans.push_back(max(l, b));
        ans.push_back(min(l, b));
        
        return ans;
    }
};
