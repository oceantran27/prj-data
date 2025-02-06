#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

using LL = long long;
class Solution {
public:
    long long minimumCost(string s) 
    {
        int n = s.size();
        long long ret = 0;
        for (int i=1; i<n; i++)
        {
            if (s[i-1]!=s[i])
                ret += min(i, n-i);
        }
        return ret;        
    }
};
