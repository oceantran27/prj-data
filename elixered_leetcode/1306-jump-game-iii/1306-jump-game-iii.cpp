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
    bool canReach(vector<int>& arr, int start) {
        int n = arr.size();
        queue<int> q;
        q.push(start);
        while(!q.empty())
        {
            auto node = q.front();
            q.pop();
            if(arr[node]==0)
                return true;
            else if(arr[node]<0) continue;
            int prev = node-arr[node];
            if(prev>=0 && prev<n)
            {
                q.push(prev);
            }
            int next = node+arr[node];
            if(next>=0 && next<n)
            {
                q.push(next);
            }
            arr[node]*=-1;
        }
        return false;
    }
};