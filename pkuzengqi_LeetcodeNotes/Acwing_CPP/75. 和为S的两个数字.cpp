#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

75. 和为S的两个数字

class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        unordered_set<int> h;
        for(auto x:nums)
            if(h.count(target-x)) 
                return vector<int>{x, target-x};
            else
                h.insert(x);
        
        return vector<int>();
    }
};