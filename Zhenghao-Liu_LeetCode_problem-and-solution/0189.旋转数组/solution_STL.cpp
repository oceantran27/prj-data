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
    void rotate(vector<int>& nums, int k) {
        int nums_size=nums.size();
        k=k%nums_size;
        std::rotate(nums.begin(),nums.end()-k,nums.end());
    }
};
