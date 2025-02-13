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
    
    vector<int> anagramMappings(vector<int>& a1, vector<int>& a2) {
    
        vector<int> res;
        
        // Here, a2 is the anagram of a1
        // u[i] = j, means that a1[i] = a2[j]
        
        for(int i=0; i<a1.size(); i++) {
            
            int temp = find(a2.begin(), a2.end(), a1[i]) - a2.begin();
            res.push_back(temp);
        }
        
        return res;
    }
    
};