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
    
    int maxProfit(vector<int>& a) {
    
        int n = a.size();
        int sum = 0;
        
        if(n <= 1)                              return sum;
        
        for(int i=1; i<n; i++) {
            if(a[i-1] < a[i])                   sum += a[i] - a[i-1];
        }
        
        return sum;
    }
    
};