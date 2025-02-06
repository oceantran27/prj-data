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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>>results={{}};
        
        sort(nums.begin(),nums.end());
        
        int add=0;
        
        for (int i=0; i<nums.size(); i++)
        {            
            int N=results.size();
            
            if (i==0 || nums[i]!=nums[i-1])
            {
                for (int j=0; j<N; j++)
                {
                    vector<int>temp=results[j];
                    temp.push_back(nums[i]);
                    results.push_back(temp);
                }
                add = N;                    
            }
            else if (nums[i]==nums[i-1])
            {
                for (int j=N-add; j<N; j++)
                {
                    vector<int>temp = results[j];
                    temp.push_back(nums[i]);
                    results.push_back(temp);
                }                
            }            
        }
        
        return results;
    }
};
