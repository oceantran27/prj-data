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
    int maximizeSweetness(vector<int>& s, int K) 
    {
        int l = 1, r = accumulate(s.begin(), s.end(), 0)/(K + 1);
        while (l < r) 
        {
            int mid = (l + r + 1) >> 1;
            int cur = 0, cuts = 0;
            for (int v : s) 
            {
                cur += v;
                if (cur >= mid) cuts++, cur = 0;
            }
            if (cuts > K) l = mid;
            else r = mid - 1;
        }
        return l;
    }
};