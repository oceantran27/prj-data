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
        vector<int> min(nums.begin(),nums.begin() + k);
        make_heap(min.begin(),min.end(),greater<int>());
        
        for(int i = k;i < nums.size();i++){
            if(nums[i] > min.front()){
                pop_heap(min.begin(),min.end(),greater<int>());
                min.pop_back();
                min.push_back(nums[i]);
                push_heap(min.begin(),min.end(),greater<int>());
            }
        }
        
        return min.front();
    }
};