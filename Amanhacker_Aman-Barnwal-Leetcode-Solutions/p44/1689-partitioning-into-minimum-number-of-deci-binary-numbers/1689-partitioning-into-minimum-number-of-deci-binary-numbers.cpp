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
    
    int minPartitions(string n) {
    
        int res = INT_MIN;
        
        for(auto &x : n) {
            int temp = (int)(x - '0');
            res = max(res, temp);
        }
        
        return res;
    }
    
};