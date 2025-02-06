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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int n = nums.size();
        int i = 0;
        int zero = 0;
        for (int j = 0; j < n; ++j) {
            if (nums[j] == 0) {
                ++zero;
            }
            
            while (zero > 1) {
                if (nums[i++] == 0) {
                    --zero;
                }
            }
            
            maxCount = max(maxCount, j - i + 1);
        }

        return maxCount;
    }
};

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = 0, start = 0, q = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                start = q + 1;
                q = i;
            }
            maxLen = max(maxLen, i - start + 1);
        }
        return maxLen;
    }
};

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int n = nums.size();
        int j = 0;
        int zero = 0;
        for (int i = 0; i < n; ++i) {
            while (j < n && zero <= 1) {
                if (nums[j] == 0) {
                    ++zero;
                }
                if (zero <= 1) {
                    maxCount = max(maxCount, j - i + 1);
                }
                ++j;
            }
            
            if (nums[i] == 0) {
                --zero;
            }
        }
        return maxCount;
    }
};
