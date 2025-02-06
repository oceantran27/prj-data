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
        int len = nums.size();
        if(len < 2)
            return len;
        int index = 0;//前一个不一样的数的下标
        for(int i=1;i<len;i++){
            if(nums[i] != nums[index]){
                index ++;//下标后移
                nums[index] = nums[i];
            }
        }
        return index + 1;
    }
};