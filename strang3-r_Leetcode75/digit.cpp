#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<bits/stdc++.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //approach 1
        int xorresult = 0;
        for(int i =0;i<nums.size();i++){
            xorresult^=nums[i];
        }
        return xorresult;
        
    }
};
