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
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int, int> cnt;

        for (auto num : nums) {
            cnt[num]++;
            if (cnt[num] > 1) return num;
        }

        return 0;
    }
};