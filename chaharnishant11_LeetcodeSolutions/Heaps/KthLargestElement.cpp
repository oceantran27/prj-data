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
        priority_queue<int> q;
        if(k==0) return 0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            q.push(nums[i]);
        }
        while(k>1){
            q.pop();
            k--;
        }
        return q.top();
    }
};