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
    
    string convertToTitle(int columnNumber) {
    
        string res = "";
        
        int n = columnNumber;
        n--;
        
        while(n >= 0) {
            
            res += 'A' + (n % 26);
            n /= 26;
            
            n--;
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
};