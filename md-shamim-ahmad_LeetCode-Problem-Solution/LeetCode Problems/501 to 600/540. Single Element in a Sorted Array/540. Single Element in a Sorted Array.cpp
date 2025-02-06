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
    int singleNonDuplicate(vector<int> &nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (m % 2 == 1)
                m--;
            if (nums[m] != nums[m + 1])
                r = m;
            else
                l = m + 2;
        }
        return nums[l];
    }
};