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
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        int ans=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])count++;
            else{
                ans+=((count*(count-1)/2));
                count=1;
            }
        }
        ans+=((count*(count-1)/2));
        return ans;
    }
};
