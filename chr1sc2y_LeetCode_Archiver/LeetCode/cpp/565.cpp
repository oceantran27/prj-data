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
    int arrayNesting(vector<int> &nums) {
        int maxLen = 0, i = 0, numMinus = 0, size = nums.size();
        for(int i = 0 ; i < size;++i) {
            if(nums[i] != -1) {
                int len = 0, j = i;
                while (nums[j] != -1) {
                    int temp = nums[j];
                    nums[j] = -1;
                    j = temp;
                    ++len;
                    ++numMinus;
                }
                maxLen = max(maxLen, len);
            }
        }
        return maxLen;
    }
};