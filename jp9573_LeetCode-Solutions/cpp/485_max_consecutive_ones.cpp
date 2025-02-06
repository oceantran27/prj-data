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
        if(nums.size()==0) {
            return 0;
        }
        int i=0;
        int count=0;
        int lastCount=0;
        while (i<nums.size()) {
            if (nums[i] == 1) {
                count++;
                lastCount = max(count,lastCount);
            }
            else {
                count = 0;
            }
            ++i;
        }
        return lastCount;
    }
};
