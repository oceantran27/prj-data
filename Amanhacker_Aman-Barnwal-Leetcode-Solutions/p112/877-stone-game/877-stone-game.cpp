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
    
    bool stoneGame(vector<int>& piles) {
    
        int n = piles.size();
        
        // Finding sum at even and odd indexes, considering 0-based indexing
        int sumEven = 0,sumOdd = 0;
        
        // Alice always starts first
        
        for(int i=0, j=1; i<n; i += 2, j += 2) {
            
            sumEven += piles[i];
            if(j < n)                   sumOdd += piles[j];
        }
        
        return (sumOdd != sumEven);
    }
    
};