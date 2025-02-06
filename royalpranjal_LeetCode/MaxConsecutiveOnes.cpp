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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, temp = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                temp++;
            }
            else{
                temp = 0;
            }
            ans = max(ans, temp);
        }
        
        return ans;
    }
};
