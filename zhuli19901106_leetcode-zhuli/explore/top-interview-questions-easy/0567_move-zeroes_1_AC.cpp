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
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i, j;
        i = j = 0;
        while (i < n) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
            ++i;
        }
        while (j < n) {
            nums[j++] = 0;
        }
    }
};
