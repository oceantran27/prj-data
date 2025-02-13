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
    
    int longestSubsequence(vector<int>& a, int diff) {
    
        int res = INT_MIN;
        
        // mp[i] is the length of Longest Arithmetic Subsequence till index i from index 0
        
        unordered_map<int, int> mp;
        int n = a.size();
        
        for(int i=0; i<n; i++) {
            
            int temp = a[i] - diff;
            mp[a[i]] = mp[temp] + 1;
            
            res = max(res, mp[a[i]]);
        }
        
        return res;
    }
    
};