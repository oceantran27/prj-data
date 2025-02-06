#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i, j, k;
        i = j = k = 0;;
        while (i < n) {
            nums[k++] = nums[i];
            j = i + 1;
            while (j < n && nums[i] == nums[j]) {
                ++j;
            }
            i = j;
        }
        return k;
    }
};
