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
    int findNumbers(vector<int>& nums) 
    {
        int res = 0;
        for (int n : nums)
        {
            int x = 0;
            while (n) n /= 10, x++;
            if (x % 2 == 0) ++res;
        }
        return res;
    }
};