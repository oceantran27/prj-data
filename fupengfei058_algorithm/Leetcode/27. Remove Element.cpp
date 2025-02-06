#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*Remove Element:Given an array and a value, remove all instances of that value in-place and return the new length.*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
        	if(nums[i] != val){
        		nums[j++] = nums[i];
        	}
        }
        return j;
    }
};