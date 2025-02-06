#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static const auto SpeedUp = []{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int nums_size=nums.size();
        if (nums_size==0)
            return 0;
        int left=0,right=nums_size-1,middle,middle_value;
        while (left<=right && left>=0 && right<=nums_size-1)
        {
            middle=(left+right)/2;
            middle_value=nums.at(middle);
            if (middle_value==target)
                return middle;
            else if (middle_value<target)
                left=middle+1;
            else
                right=middle-1;
        }
        return left;
    }
};
