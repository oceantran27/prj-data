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
    
    bool hasAlternatingBits(int n) {
    
        string res = "";
        
        while(n > 0) {
            res.push_back(n % 2);
            n = n / 2;
        }
        
        for(int i=1; i<res.size(); i++) {
            if(res[i] == res[i-1])                                          return false;
        }
        
        return true;
    }
    
};