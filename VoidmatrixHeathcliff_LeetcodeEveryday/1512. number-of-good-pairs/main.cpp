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
    int numIdenticalPairs(vector<int>& nums) {
        int iLength = nums.size(), iResult = 0;
        for (int i = 0; i < iLength; i++)
            for (int j = i + 1; j < iLength; j++)
                if (nums[i] == nums[j])
                    iResult++;
        return iResult;
    }
};