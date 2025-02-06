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
    vector<int> countBits(int n) {
        vector<int> ans(n);
        ans.push_back(0);
        if(n==0)
            return ans;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                ans[i]=ans[i/2];
            }
            else{
                ans[i]=ans[i-1]+1;
            }
        }
        return ans;
    }
};