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
    bool isPreorder(vector<vector<int>>& nodes) 
    {
        stack<int>stk;
        stk.push(nodes[0][0]);
        for (int i=1; i<nodes.size(); i++)
        {
            auto node = nodes[i];
            while (!stk.empty() && node[1] != stk.top())
                stk.pop();
            if (stk.empty()) return false;
            stk.push(node[0]);
        }

        return true;
    }
};
