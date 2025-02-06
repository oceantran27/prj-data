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
    int MaximumProduct(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        int N=nums.size();
        return max(nums[0]*nums[1]*nums[N-1], nums[N-3]*nums[N-2]*nums[N-1]);
    }
};
