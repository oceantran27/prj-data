#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//һҳ˻һҵ˻鼴
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nums_size=nums.size();
        if (nums_size==0)
            return {};
        vector<int> left_right(nums_size);
        left_right.at(0)=1;
        for (int i=1;i<nums_size;++i)
            left_right.at(i)=left_right.at(i-1)*nums.at(i-1);
        vector<int> right_left(nums_size);
        right_left.back()=1;
        for (int i=nums_size-2;i>=0;--i)
            right_left.at(i)=right_left.at(i+1)*nums.at(i+1);
        vector<int> answer(nums_size);
        for (int i=0;i<nums_size;++i)
            answer.at(i)=left_right.at(i)*right_left.at(i);
        return answer;
    }
};
