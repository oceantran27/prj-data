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
    int removeDuplicates(vector<int> &nums) {
        auto size = nums.size();
        if (!size)
            return 0;
        int i = 0, j = 1;
        while (j < size) {
            if (nums[j] != nums[i])
                nums[++i] = nums[j];
            ++j;
        }
        return i + 1;
    }
};
