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
    
    int maxRepeating(string seq, string word) {
    
        int res = 0;
        string temp = "";
        
        while(true) {
            
            temp += word;
            
            // Check whether temp is not a substring in sequence
            if(seq.find(temp) == string :: npos)                       return res;
            res++;
        }
        
        return res;        
    }
    
};