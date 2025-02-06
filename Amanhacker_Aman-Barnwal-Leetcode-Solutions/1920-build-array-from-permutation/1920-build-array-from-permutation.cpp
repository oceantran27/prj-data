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
    
    vector<int> buildArray(vector<int>& a) {
    
        int n = a.size();
        vector<int> res(n);
        
        for(int i=0; i<n; i++)              res[i] = a[a[i]];
        
        return res;
    }
    
};