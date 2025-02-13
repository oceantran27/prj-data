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
   
    int numOfStrings(vector<string>& pat, string word) {
    
        int count = 0;
        int n = pat.size();
        
        for(auto &x : pat) {
            
            // Checks whether x substring exists in string word
            if(word.find(x) != string::npos)                    count++;
        }
        
        return count;
    }
    
};