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
    
    
    vector<int> findClosestElements(vector<int>& v, int k, int x) {
    
        vector<int> res;
        
        // Sort the elements of v according to distance from x
        
        stable_sort(v.begin(), v.end(), [x](const auto a, const auto b) {
            return abs(a - x) < abs(b - x);  
        });
         
        v.resize(k);
        sort(v.begin(), v.end());
        
        return v;
    }
    
};