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
    
    int minInsertions(string s) {
    
        int manualAdd = 0;
        int reqClose = 0;
        
        int n = s.length();
        
        for(int i=0; i<n; i++) {
           
            if(s[i] == '(') {
                
                reqClose += 2;
                
                if(reqClose % 2 != 0) {
                    manualAdd++;
                    reqClose--;
                }
            }
            
            else {
                
                if(reqClose == 0) {
                    manualAdd++;
                    reqClose++;
                }
                
                else                                        reqClose--;
            }
        }
        
        return manualAdd + reqClose;
    }
    
};