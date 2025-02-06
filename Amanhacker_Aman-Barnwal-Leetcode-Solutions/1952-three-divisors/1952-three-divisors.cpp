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
    
    bool isThree(int n) {
    
        int c = 0;
        
        if(n <= 3)                                  return false;
        
        for(int i=2; i<n; i++) {
            
            if(n % i == 0) {
                c++;
            }
            
            if(c >= 2)                              return false;
        }
        
        if(c == 0)                                  return false;
        
        return (c == 1);
    }
    
};