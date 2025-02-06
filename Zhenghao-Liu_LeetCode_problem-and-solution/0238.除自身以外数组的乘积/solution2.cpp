#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//ҳ˻ֱanswerϽеһڼҵ˻ʱһ˻
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nums_size=nums.size();
        if (nums_size==0)
            return {};
        vector<int> answer(nums_size);
        answer.at(0)=1;
        for (int i=1;i<nums_size;++i)
            answer.at(i)=answer.at(i-1)*nums.at(i-1);
        int right=nums.back();
        for (int i=nums_size-2;i>=0;--i)
        {
            answer.at(i)=answer.at(i)*right;
            right=right*nums.at(i);
        }
        return answer;
    }
};
