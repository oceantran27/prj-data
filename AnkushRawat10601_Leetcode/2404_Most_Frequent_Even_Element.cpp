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
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>counts;
            
            for(int i:nums){
                if(i%2==0)
                   counts[i]++;    
            }
            
            int ans=-1 ,freq=INT_MIN; 
            
            for(auto i: counts){
                //cout<<i.first <<" "<<i.second<<endl;
                    if(i.second>freq){
                            ans=i.first, freq=i.second;
                    }
            }
            return ans;  }
};