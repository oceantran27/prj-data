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
    bool isMonotonic(vector<int> &nums) {
        bool check = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] >= nums[i])
                check = true;
            else {
                check = false;
                break;
            }
        }
        if (check == true) return check;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] <= nums[i])
                check = true;
            else {
                check = false;
                break;
            }
        }
        return check;
    }
};