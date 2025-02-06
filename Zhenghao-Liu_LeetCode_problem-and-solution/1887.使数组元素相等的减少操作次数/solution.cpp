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
    int reductionOperations(vector<int>& nums) {
        map<int,int> mp;
        for (int i:nums) {
            mp[i]++;
        }
        int ans=0;
        while (mp.size()>1) {
            auto p=mp.end();
            p--;
            int cnt=p->second;
            ans+=cnt;
            mp.erase(p);
            p=mp.end();
            p--;
            p->second+=cnt;
        }
        return ans;
    }
};