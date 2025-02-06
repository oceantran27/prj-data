#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (auto interval : intervals)
    {
        if (ans.size() == 0 || ans.back()[1] < interval[0])
        {
            ans.push_back(interval);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], interval[1]);
        }
    }
    return ans;
}