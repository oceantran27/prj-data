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
    int searchInsert(vector<int>& nums, int target) {
        int iLength = nums.size(), iLeftIndex = 0, iRightIndex = iLength - 1, iResult = iLength;
        while (iLeftIndex <= iRightIndex) {
            int iMidIndex = ((iRightIndex - iLeftIndex) >> 1) + iLeftIndex;
            target <= nums[iMidIndex] ? iResult = iMidIndex, iRightIndex = iMidIndex - 1 : iLeftIndex = iMidIndex + 1;
        }
        return iResult;
    }
};