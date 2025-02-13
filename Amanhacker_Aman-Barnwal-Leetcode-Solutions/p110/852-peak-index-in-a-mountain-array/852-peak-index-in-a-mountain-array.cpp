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
   
    int peakIndexInMountainArray(vector<int>& a) {
    
        int n = a.size();
        
        if(a[0] > a[1])                                                 return 0;
        
        for(int i=1; i<n-1; i++) {
            
            if(a[i-1] < a[i] && a[i] > a[i+1])                          return i;
        }
        
        return n - 1;        
    }
    
};