#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*Remove Duplicates from Sorted Array:Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if (nums.empty()) return 0;
        int j = 0, n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] != nums[j]) nums[++j] = nums[i];
        }
        return j + 1;
    }
};