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
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]<=0 || nums[i]>n)
                i++;
            else{
                int v=nums[i]-1;
                if(nums[i]!=i+1 && nums[v]!=v+1)
                {
                    swap(nums[i], nums[v]);
                }
                else
                    i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1)
                return i+1;
        }
        return n+1;
    }
};