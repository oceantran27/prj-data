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
   
    int numberOfSteps(int n) {
        
        int count = 0;
    
        while(n > 0) {
            
            if(n % 2 == 0)                 n = n / 2;
            else                           n--;
            
            count++;
        }
        
        return count;
    }
    
};