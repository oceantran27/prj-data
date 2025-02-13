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
    
    bool detectCapitalUse(string word) {
    
        int n = word.length();
        int countCapital = 0;
       
        for(auto &x : word) {
            if(isupper(x))                          countCapital++;
        }
        
        int countLower = n - countCapital;
        
        return (countCapital == n || countLower == n || (isupper(word[0]) && countLower == n-1));
    }
    
};