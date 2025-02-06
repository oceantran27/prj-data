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
    
    int minimumMoves(string s) {
    
        int move = 0;
        
        int n = s.length();
        int i = 0;
        
        while(i < n) {
            
            if(s[i] == 'X') {
                i += 3;
                move++;
            }
            
            else                        i++;
        }
        
        return move;
    }
    
};