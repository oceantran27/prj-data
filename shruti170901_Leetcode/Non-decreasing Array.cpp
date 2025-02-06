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
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
       
        for(int i = 0; i + 1 < nums.size(); i++){
            if(nums[i] > nums[i + 1]){
                count++;
                if(count > 1 || i > 0 && i + 2 < nums.size() && nums[i - 1] > nums[i + 1] && nums[i] > nums[i + 2])
                    return false;
            }
        }
        return true;
    }
};
