#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Source : https://leetcode.com/problems/contains-duplicate-ii/
// Author : Hao Chen
// Date   : 2015-06-12

/********************************************************************************** 
 * 
 * Given an array of integers and an integer k, find out whether there there are 
 * two distinct indices i and j in the array such that nums[i] = nums[j] and 
 * the difference between i and j is at most k.
 * 
 *               
 **********************************************************************************/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int i=0; i<nums.size(); i++) {
            int n = nums[i];
            if (m.find(n) != m.end() && i - m[n] <= k) {
                return true;
            }
            m[n] = i;
        }
        return false;
    }
};

