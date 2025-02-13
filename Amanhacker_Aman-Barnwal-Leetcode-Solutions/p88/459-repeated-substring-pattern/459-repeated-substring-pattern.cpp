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
    
    bool repeatedSubstringPattern(string s) {
    
        int n = s.length();
        
        // On removing the first and the last characters, if there exists some pattern, we would still be able to find the original string somewhere in the middle, taking some characters from the first half and some from the second half.
        
        return (s + s).substr(1, 2*n-2).find(s) != -1;
    }
    
};