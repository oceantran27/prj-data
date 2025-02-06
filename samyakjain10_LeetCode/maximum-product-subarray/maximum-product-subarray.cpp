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
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==0) return 0;
        
        int ans = INT_MIN;
        
        int minProd = 1;
        int maxProd = 1;
        
        for(int num: nums){
            
            if(num<0){
                swap(maxProd,minProd);
            }
            
            maxProd = max(maxProd*num, num);
            minProd = min(minProd*num, num);
            
            ans = max(ans,maxProd);
            
        }
        return ans;
    }
};