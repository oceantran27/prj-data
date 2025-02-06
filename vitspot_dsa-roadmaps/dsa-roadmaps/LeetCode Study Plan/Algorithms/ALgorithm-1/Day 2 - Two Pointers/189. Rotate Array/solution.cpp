#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//O(1) Time Complexity and O(1) Space Complexity

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k%nums.size()!=0) {
            k=k%nums.size();k=nums.size()-k;
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
            reverse(nums.begin(),nums.end());
        }
    }
};
