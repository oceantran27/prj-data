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
    long long minimumRemoval(vector<int>& beans) 
    {
        sort(beans.rbegin(), beans.rend());
        LL total = accumulate(beans.begin(), beans.end(), 0LL);

        LL ret = LLONG_MAX;
        for (int i=0; i<beans.size(); i++)
        {            
            ret = min(ret, total - (LL)beans[i]*(i+1));
        }
        return ret;        
    }
};
