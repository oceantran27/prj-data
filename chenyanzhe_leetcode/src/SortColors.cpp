#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "SortColors.hpp"

void SortColors::sortColors(vector<int> &nums) {
    int i = 0, j = 0, k = nums.size() - 1;

    while (j <= k) {
        if (nums[j] < 1)
            swap(nums[i++], nums[j++]);
        else if (nums[j] > 1)
            swap(nums[j], nums[k--]);
        else
            j++;
    }
}
