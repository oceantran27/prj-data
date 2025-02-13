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
    
    int findLUSlength(string a, string b) {
    
        // Find the length of Longest Uncommon Subsequence between a and b
        int res = -1;
        
        int l = max(a.length(), b.length());
        
        if(a != b)                                     res = l;
        
        return res;
    }
    
};