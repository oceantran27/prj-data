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
    int removeElement(vector<int>& nums, int val) {
        int cur = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
                continue;
            nums[cur] = nums[i];
            cur++;
        }
        return cur;
    }
};