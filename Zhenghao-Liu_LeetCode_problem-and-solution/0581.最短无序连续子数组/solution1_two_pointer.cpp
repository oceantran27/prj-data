#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//先排序后，然后双指针找到对应边界即可
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted_nums=nums;
        sort(sorted_nums.begin(),sorted_nums.end());
        int nums_size=nums.size();
        int start=0,end=nums.size();
        while (start<nums_size)
            if (nums.at(start)!=sorted_nums.at(start))
                break;
            else
                ++start;
        while (end>start)
            if (nums.at(end-1)!=sorted_nums.at(end-1))
                break;
            else
                --end;
        return end-start;
    }
};
