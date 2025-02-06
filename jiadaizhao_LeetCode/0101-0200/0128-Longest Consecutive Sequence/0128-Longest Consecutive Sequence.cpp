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
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> table(nums.begin(), nums.end());
        int maxLen = 0;
        for (int num : nums) {
            if (!table.count(num - 1)) {
                int nextNum = num + 1;
                while (table.count(nextNum)) {
                    ++nextNum;
                }
                maxLen = max(maxLen, nextNum - num);
            }
        }
        return maxLen;
    }
};
