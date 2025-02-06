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
    long long appealSum(string s) 
    {
        int n = s.size();
        vector<int>last(26, -1);        
            
        long long ret = 0;
        for (int i=0; i<n; i++)
        {
            ret += (i-last[s[i]-'a']) * (n-i);
            last[s[i]-'a']=i;
        }
            
        return ret;        
    }
};
