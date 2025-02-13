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
    
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
    
        vector<vector<int>> res;
        
        int siz = a.size();
        vector<int> temp;
        
        if(siz != m * n)                                        return res;
        
        for(int i=0; i<siz; i += n) {
            
            for(int k=i; k<i+n; k++)                            temp.push_back(a[k]);
            
            res.push_back(temp);
            temp.clear();
        }
        
        return res;
    }
    
};