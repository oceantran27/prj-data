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
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0 || n==1) return 0;
        int m=prices[n-1];
        int ans=0;
        for(int i=n-1;i>=0;i--){
            ans=max(ans,m-prices[i]);
            m=max(m,prices[i]);
        }
        return ans;
    }
};