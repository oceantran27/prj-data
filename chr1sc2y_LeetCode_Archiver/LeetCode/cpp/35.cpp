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
    int searchInsert(vector<int> &nums, int target) {
        int i = 0, j = nums.size() - 1, index = 0;
        while (i <= j) {
            index = (i + j) / 2;
            if (nums[index] < target)
                i = index + 1;
            else if (nums[index] > target)
                j = index - 1;
            else
                return index;
        }
        return i;
    }
};