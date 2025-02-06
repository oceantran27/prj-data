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
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>pq;
        
        for(auto x:nums)
            pq.push(x);
        
        k--;
        
        
        while(k--)
            pq.pop();
        
        
        return pq.top();
        
        
        
    }
};
