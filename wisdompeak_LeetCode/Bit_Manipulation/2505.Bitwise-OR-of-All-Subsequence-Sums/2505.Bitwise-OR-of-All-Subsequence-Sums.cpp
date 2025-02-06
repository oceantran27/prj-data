#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

using LL = long long;
class Solution {
public:
    long long subsequenceSumOr(vector<int>& nums) 
    {
        LL ret = 0;
        LL sum = 0;
        for (int x: nums)
        {
            ret = ret | x;
            sum += x;
            ret = ret | sum;
        }
        return ret;        
    }
};
