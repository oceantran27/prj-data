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
    
    bool isPowerOfFour(int n) {
        
        if(n == 1)                                      return true;
        if(n <= 0)                                      return false;
        
        if(n % 4 == 0) {
            
            while(n >= 4 && n % 4 == 0) {
                n = n / 4;
            }
            
            cout << n << " ";
            
            if(n == 1)                                  return true;
            
            if(n % 4 == 0)                              return true;
            return false;
        }
            
        else                                            return false;
    }
    
};