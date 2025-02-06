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
    int minCost(string s, vector<int>& neededTime) {
        int ans=0; 
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) {
                 ans+=min(neededTime[i],neededTime[i-1]);
                 neededTime[i]=max(neededTime[i],neededTime[i-1]);
            }
       }
        return ans;
    }
};