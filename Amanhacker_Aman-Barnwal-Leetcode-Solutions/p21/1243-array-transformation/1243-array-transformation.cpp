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
  
    vector<int> transformArray(vector<int>& a) {
    
        vector<int> temp;
        int n = a.size();
        
        for(int k=1; k<=n-2; k++) {
            
            temp = a;
            
            for(int i=1; i<=n-2; i++) {
                if(temp[i-1] > temp[i] && temp[i] < temp[i+1])                          a[i]++;
                else if(temp[i-1] < temp[i] && temp[i] > temp[i+1])                     a[i]--;
             }
            
            temp = a;
        }
        
        return temp;
    }
    
};