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
    int totalHammingDistance(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int bit = 0; bit < 31; ++bit) {
            int count1 = 0;
            int mask = 1 << bit;
            for (int num : nums) {
                if (num & mask) {
                    ++count1;
                }
            }
            count += count1 * (n - count1);
        }
        
        return count;
    }
};
