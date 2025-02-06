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
    int connectSticks(vector<int>& sticks) 
    {
        priority_queue<int, vector<int>, greater<int>> q(sticks.begin(), sticks.end());
        int res = 0;
        while (q.size() > 1) 
        {
            int a = q.top(); q.pop();
            int b = q.top(); q.pop();
            res += a + b;
            q.push(a + b);
        }
        return res;
    }
};