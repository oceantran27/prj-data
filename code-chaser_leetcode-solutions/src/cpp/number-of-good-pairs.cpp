#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


//   Author - Shadowpii

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int count=0;
        for(auto it : m)
        {
            int c=it.second;
            count+=(c*(c-1))/2;;
        }   
        
        return count;
    }
};