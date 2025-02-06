#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    vector<int> dailyTemperatures(vector<int>& T) 
    {
        vector<int> res(T.size(), 0);
        vector<int> stack;
        for (int i = 0; i < T.size(); ++i)
        {
            while (!stack.empty() and T[stack.back()] < T[i])
            {
                int cur = stack.back(); stack.pop_back();
                res[cur] = i - cur;
            }
            stack.push_back(i);
        }
        return res;
    }
};