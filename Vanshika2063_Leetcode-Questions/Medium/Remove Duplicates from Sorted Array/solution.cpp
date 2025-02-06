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
    int removeDuplicates(vector<int>& nums) {
        int j=0;;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                j++;
            
            nums[j]=nums[i];
        }
    }
    return j+1;
    }
};
