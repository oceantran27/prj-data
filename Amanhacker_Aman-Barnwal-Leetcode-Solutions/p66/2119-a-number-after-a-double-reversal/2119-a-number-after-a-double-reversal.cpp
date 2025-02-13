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
    
    bool isSameAfterReversals(int n) {
            
        if(n == 0)                                          return true;
        
        int lastDigit = n % 10;
    
        return (lastDigit != 0);
    }
    
};