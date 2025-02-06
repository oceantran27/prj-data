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
    
    int lengthOfLastWord(string s) {
    
        int res = 0;
        
        int n = s.length();
        int i = n - 1;
        
        while(s[i] == ' ') {
            i--;
        }
        
        for( ; i>=0; i--) {
            if(s[i] == ' ')                     return res;
            res++;
        }
        
        return res;
    }
    
};