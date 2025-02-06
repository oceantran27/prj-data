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
    int maximumGap(vector<int>& nums) {
        map<int,int> m;
        for(auto v: nums)
            m[v]++;
        vector<int> a;
        int ans=0;
        for(auto it: m){
            while(it.second--){
                a.push_back(it.first);
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            ans=max(ans, abs(a[i]-a[i+1]));
        }
        return ans;
    }
};