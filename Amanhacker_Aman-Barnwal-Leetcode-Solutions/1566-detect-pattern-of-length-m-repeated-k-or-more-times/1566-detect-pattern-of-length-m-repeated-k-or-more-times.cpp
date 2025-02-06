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
  
    bool containsPattern(vector<int>& a, int m, int k) {
    
        int count = 0;
        int n = a.size();
        
        // Subarray of size m should repeat greater or equal to k times consecutively
        
        for(int i=0; i<n-m; i++) {
            
            if(a[i] != a[i + m])                            count = 0;
            else                                            count++;
            
            if(count == m * (k - 1))                        return true;
        }
        
        return false;        
    }
    
};