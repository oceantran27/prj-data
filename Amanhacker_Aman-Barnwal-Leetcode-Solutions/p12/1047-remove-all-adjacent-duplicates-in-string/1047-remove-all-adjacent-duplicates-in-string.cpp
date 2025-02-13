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
    
    string removeDuplicates(string s) {
    
        string res = "";
        
        stack<char> w;
        
        for(int i=0; i<s.length(); i++) {
            
            if(w.empty() == true)                           w.push(s[i]);
            else {
                
                char top = w.top();
                
                if(top == s[i])                             w.pop(); 
                else                                        w.push(s[i]);
            }
        }
        
        while(w.empty() == false) {
            res += w.top();
            w.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
};