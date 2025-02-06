#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int>& nums)
    {
        int n=nums.size();

        int c=0;
        int count=0;

        for(auto i:nums)
        {
            if(count==0)
            {
                c=i;
            }
            if(c==i)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return c;
    }
};
