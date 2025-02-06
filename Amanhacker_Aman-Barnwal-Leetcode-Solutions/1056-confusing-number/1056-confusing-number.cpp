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
  
    bool confusingNumber(int num) {
    
        string s = to_string(num);
        
        int n = s.length();
        string res = s;
        
        for(int i=0; i<n; i++) {
           
            if(s[i] == '6')                                         s[i] = '9';
            else if(s[i] == '9')                                    s[i] = '6';
            else if(s[i] == '0' || s[i] == '8' || s[i] == '1')      continue;
            else                                                    return false;
        }
        
        reverse(res.begin(), res.end());
        return (res != s);
    }
    
};