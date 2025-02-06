#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Omar Wael
// leetcode account : https://leetcode.com/OmarWael1/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // add all numbers to ordered map
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int i=0;
        // roll back the numbers to the vector
        for(auto it:mp){
            for(int j=0;j<it.second;j++){
                nums[i]=it.first;
                i++;
            }
        }
        return nums;
    }
};
