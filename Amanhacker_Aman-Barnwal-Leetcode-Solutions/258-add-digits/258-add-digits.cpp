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
    
    int addDigits(int n) {
    
        int res;
        
        if(n == 0)                                      return 0;
        
        int num = n;
        
        while(true) {
            
            int sum = 0;
            
            while(n > 0) {
                sum += (n % 10);
                n = n / 10;
            }
            
            n = sum;
            
            if(n <= 9)                                  break;  
        }
        
        res = n;
        return res;
    }
    
};