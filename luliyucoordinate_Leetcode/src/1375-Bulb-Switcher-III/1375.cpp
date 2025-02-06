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
    int numTimesAllBlue(vector<int>& light) 
    {
        int res = 0, maxv = 0;
        for (int i = 0; i < light.size(); i++)
        {
            maxv = max(maxv, light[i]);
            if (maxv == i + 1) res++;
        }
        return res;
    }
};