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
    vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
    {
        vector<vector<int>> ans;
        int i = 0, j = 0;
        while (i < firstList.size() && j < secondList.size())
        {
            int lo = max(firstList[i][0], secondList[j][0]);
            int hi = min(firstList[i][1], secondList[j][1]);
            if (lo <= hi)
            {
                ans.push_back({lo, hi});
            }
            if (firstList[i][1] < secondList[j][1])
            {
                i++;
            }
            else
                j++;
        }
        return ans;
    }
};