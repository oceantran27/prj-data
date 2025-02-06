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
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> table;
        int sum = 0;
        table[0] = 1;
        int count = 0;
        for (int num : nums) {
            sum += num;
            count += table[sum - k];
            ++table[sum];
        }
        
        return count;
    }
};
