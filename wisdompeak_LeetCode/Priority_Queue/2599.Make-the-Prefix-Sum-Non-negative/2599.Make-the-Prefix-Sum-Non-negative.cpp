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
    int makePrefSumNonNegative(vector<int>& nums) 
    {
        priority_queue<int>pq;
        long long sum = 0;
        int ret = 0;
        
        for (int x: nums)
        {
            if (x >= 0)
                sum += x;
            else if (sum + x >=0)
            {
                sum += x;
                pq.push(abs(x));
            }
            else
            {
                pq.push(abs(x));
                sum += x;
                int y = pq.top();
                pq.pop();
                sum += y;
                ret++;
            }
        }
        return ret;        
    }
};
