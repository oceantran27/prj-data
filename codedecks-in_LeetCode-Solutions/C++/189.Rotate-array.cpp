#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

difficulty level: Medium
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        // we first reverse all the elements,[7 6 5 4 3 2 1]
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            swap(nums[i], nums[j]);
        }
       // then we reverse the set of elements sized k for example [7 6 5 4 3 2 1] = [ 5 6 7 4 3 2 1] 
        for (int i = 0, j = k - 1; i < j; i++, j--) {
            swap(nums[i], nums[j]);
        }
        //finally we reverse the ending elements too = 5 6 7 1 2 3 4
        for (int i = k, j = n - 1; i < j; i++, j--) {
            swap(nums[i], nums[j]);
        }
    }
};

Time complexity:O(n)
Space Complexity:O(1)
/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
*/
