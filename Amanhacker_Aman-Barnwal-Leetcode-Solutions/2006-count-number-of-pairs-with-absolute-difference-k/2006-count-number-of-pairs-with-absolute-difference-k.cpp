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
    
    int countKDifference(vector<int>& a, int k) {
    
        int count = 0;
        int n = a.size();
        
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(abs(a[i] - a[j]) == k)                   count++;
            }
        }
        
        return count;
    }
    
};