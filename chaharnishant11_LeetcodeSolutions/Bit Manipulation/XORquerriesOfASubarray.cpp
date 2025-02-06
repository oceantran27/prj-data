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
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        if(n==0) return {};
        int xora[n];
        xora[0]=arr[0];
        for(int i=1;i<n;i++){
            xora[i]=xora[i-1]^arr[i];
        }
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int l=(queries[i][0]>0)?xora[queries[i][0]-1]:0;
            int r=xora[queries[i][1]];
            ans.push_back(r^l);
        }
        return ans;
    }
};