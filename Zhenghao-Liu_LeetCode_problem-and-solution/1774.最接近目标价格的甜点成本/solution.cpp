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
    int ans;
public:
    int closestCost(vector<int>& bc, vector<int>& tc, int tar) {
        int n=bc.size();
        int m=tc.size();
        ans=INT_MAX/2;
        for (int i=0;i<n;i++) {
            int cur=bc.at(i);
            if (abs(cur-tar)<abs(ans-tar)) {
                ans=cur;
            } else if (abs(cur-tar)==abs(ans-tar)) {
                ans=min(ans,cur);
            }
            dfs(tc,tar,cur,0);
        }
        return ans;
    }
    void dfs(vector<int> &tc,int tar,int cur,int idx) {
        if (abs(cur-tar)<abs(ans-tar)) {
            ans=cur;
        } else if (abs(cur-tar)==abs(ans-tar)) {
            ans=min(ans,cur);
        }
        int m=tc.size();
        if (idx>=m) {
            return;
        }
        dfs(tc,tar,cur,idx+1);
        dfs(tc,tar,cur+tc.at(idx),idx+1);
        dfs(tc,tar,cur+tc.at(idx)*2,idx+1);
    }
};
