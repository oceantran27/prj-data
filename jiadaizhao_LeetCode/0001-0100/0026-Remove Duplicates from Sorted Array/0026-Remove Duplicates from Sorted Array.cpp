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
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (count == 0 || nums[i] != nums[count - 1]) {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};
