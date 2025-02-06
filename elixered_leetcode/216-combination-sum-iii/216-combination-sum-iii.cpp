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
    vector<vector<int>> ans;
    void solve(vector<int>& temp, int start, int n, int k)
    {
        if(n<0 or k<0)
            return;
        if(n==0 && k==0)
            ans.push_back(temp);
        for(int i=start; i<=9; i++)
        {
            temp.push_back(i);
            solve(temp,i+1,n-i,k-1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(temp,1,n,k);
        return ans;
    }
};