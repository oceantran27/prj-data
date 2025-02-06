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
    int subsetXORSum(vector<int>& nums) {
        int sz=nums.size();
        int all=(1<<sz)-1;
        int ans=0;
        for (int i=1;i<=all;i++) {
            int cur=0;
            for (int j=0;j<12;j++) {
                if ((i&(1<<j))!=0) {
                    cur^=nums.at(j);
                }
            }
            ans+=cur;
        }
        return ans;
    }
};