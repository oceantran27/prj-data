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
    
    int smallestEqual(vector<int>& v) {
    
        int n = v.size();
        
        for(int i=0; i<n; i++) {
            if(i % 10 == v[i])                          return i;
        }
        
        return -1;
    }
    
};