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
    int minSwaps(vector<int>& data) 
    {
        int n = data.size(), m = accumulate(data.begin(), data.end(), 0);
        int res = m, cur = accumulate(data.begin(), data.begin()+m, 0);
        for (int i = m; i < n; ++i)
        {
            res = min(res, m - cur);
            if (data[i] == 1) cur++;
            if (data[i-m] == 1) cur--;
        }
        return res;
    }
};