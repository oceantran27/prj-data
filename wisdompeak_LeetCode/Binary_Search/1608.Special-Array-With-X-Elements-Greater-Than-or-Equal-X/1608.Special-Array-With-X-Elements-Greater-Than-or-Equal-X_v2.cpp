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
    int specialArray(vector<int>& nums) 
    {
        int N = nums.size();
        vector<int>freq(N+1,0);
        for (auto x: nums)
            freq[min(x,N)]+=1;

        int count = 0;
        for (int x=N; x>=0; x--)
        {
            count+=freq[x];                
            if (count == x)
                return x;
        }
        return -1;
    }
};
