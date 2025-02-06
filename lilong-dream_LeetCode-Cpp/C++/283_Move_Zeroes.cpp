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
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;
        while(j < nums.size()) {
            if(nums[j] != 0) {
                nums[i] = nums[j];
                if(i != j) {  //
                    nums[j] = 0;
                }
                i++;
            } 
            j++;
        }
    }
};

