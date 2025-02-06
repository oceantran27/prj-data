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
   
    int countElements(vector<int>& a) {
    
        int res = 0;
        int n = a.size();
        
        unordered_set<int> w;
        
        for(auto &x : a)                              w.insert(x);
        for(auto &x : a)                              res += w.count(x + 1);
        
        return res;
    }
    
};