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
    
    int countTriples(int n) {
        
        int count = 0, c;
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                
                c = i*i + j*j;
                int sqrtC = sqrt(c);
                
                if(sqrtC * sqrtC == c && sqrtC <= n)                          count++;    
            }
        }
        
        return count;
    }
    
};