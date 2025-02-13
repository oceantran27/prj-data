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
   
    int countOperations(int n1, int n2) {
    
        int count = 0;
        
        while(true) {
            
            if(n1 == 0 || n2 == 0)                          break;
            
            if(n1 >= n2)                                    n1 -= n2;
            else                                            n2 -= n1;
            
            count++;
        }
        
        return count;
    }
    
};