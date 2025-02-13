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
    
    vector<int> decode(vector<int>& encoded, int first) {
    
        int n = encoded.size();
        vector<int> a(n + 1);
        
        a[0] = first;
        
        // Here, encoded[i] = a[i] ^ a[i + 1], so a[i + 1] = encoded[i] * a[i]
        
        for(int i=0; i<n; i++) {
            a[i + 1] = encoded[i] ^ a[i];
        }
        
        return a;
    }
    
};