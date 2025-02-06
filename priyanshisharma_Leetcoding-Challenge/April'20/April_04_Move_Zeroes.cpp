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
     if(nums.size()==0) return ;
        int cnt=0;
        int ind=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[ind++]= nums[i];
            }
            else{
                cnt++;
            }
        }
        
        while(cnt--){
            nums[ind++]=0;
        }
    
    }
};
