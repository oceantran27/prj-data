#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "FindMinimumInRotatedSortedArray.hpp"

int FindMinimumInRotatedSortedArray::findMin(vector<int> &nums) {
    int l = 0, r = nums.size() - 1;

    while (nums[l] > nums[r]) {
        // nums[l] to nums[r] is still rotated
        int m = l + (r - l) / 2;
        if (nums[l] <= nums[m])
            l = m + 1;
        else
            r = m;
    }

    return nums[l];
}
