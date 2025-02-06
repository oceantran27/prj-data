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
    int maxSumDivThree(vector<int>& nums) 
    {
        vector<int> res(3, 0);
        for (int a : nums)
        {
            vector<int> tmp = res;
            for (int i : tmp)
                res[(i + a)%3] = max(res[(i + a)%3], i + a);
        }
        return res[0];
    }
};