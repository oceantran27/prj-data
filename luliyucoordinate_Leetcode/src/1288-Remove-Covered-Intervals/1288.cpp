#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int removeCoveredIntervals(vector<vector<int>>& A) 
    {
        sort(A.begin(), A.end(), [](const vector<int>& a, const vector<int>& b){
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });
        
        int res = 0, r = 0;
        for (auto& it : A) 
        {
            res += it[1] > r;
            r = max(r, it[1]);
        }
        return res;
    }
};