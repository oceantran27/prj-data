#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-right-interval/

class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& v) {
        map<int, int> m;
        int i, n=v.size();
        for(i=0;i<n;i++){
            m[v[i][0]]=i;
        }
        vector<int> ans(n);
        for(i=0;i<n;i++){
            auto it=m.lower_bound(v[i][1]);
            if(it!=m.end()){
                ans[i]=it->second;
            }
            else ans[i]=-1;
        }
        return ans;
    }
};