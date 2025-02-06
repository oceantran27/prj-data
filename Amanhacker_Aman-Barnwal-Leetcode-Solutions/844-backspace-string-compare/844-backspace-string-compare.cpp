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
    
    bool backspaceCompare(string s, string t) {
    
        stack<char> w1, w2; 
        
        for(auto &x : s) {
            
            if(x == '#') {
                if(w1.size() > 0)                       w1.pop();
            }
            
            else                                        w1.push(x);
        }
        
        for(auto &x : t) {
            
            if(x == '#') {
                if(w2.size() > 0)                       w2.pop();
            }
            
            else                                        w2.push(x);
        }
        
        return (w1 == w2);
    }
    
};