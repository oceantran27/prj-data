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
    vector<int> findPermutation(string pattern) 
    {
        pattern = "I" + pattern;
        int n = pattern.size();
        
        int mx = 0;
        vector<int>arr;
        
        for (int i=0; i<n; i++)
        {
            int j = i+1;
            while (j<n && pattern[j]=='D')
                j++;
            int count = j-i;            
            for (int k= mx+count; k>=mx+1; k--)
                arr.push_back(k);            
            mx = mx+count;            
            i = j-1;            
        }
        
        return arr;
    }
};
