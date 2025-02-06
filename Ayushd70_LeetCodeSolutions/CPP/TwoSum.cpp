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
    vector<int> twoSum(vector<int>& nums, int target) {
	vector <int> result;
        for(int i=0;i<nums.size();i++)
        {
           for(int j=i;j<nums.size();j++)
           {
               if(i==j)
                   continue;

               if((nums[i]+nums[j])==target)
               {
                   result.push_back(i);
                   result.push_back(j);
               }
           }
        }
        return result;
    }
};
