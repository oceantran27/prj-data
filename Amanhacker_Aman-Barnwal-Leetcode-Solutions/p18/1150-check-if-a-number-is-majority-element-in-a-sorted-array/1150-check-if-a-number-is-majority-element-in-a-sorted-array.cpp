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
    
    bool isMajorityElement(vector<int>& a, int target) {
    
        int n = a.size();
        int ct = count(a.begin(), a.end(), target);
        
        return (ct > n/2);                                        
    }
    
};