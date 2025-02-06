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
    int xorBeauty(vector<int>& nums) 
    {
        int sum = 0;
        for (int x: nums)
            sum ^= x;
        return sum;
        
    }
};
