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
    int findPairs(vector<int> &nums, int k) {
        map<int, int> knums;
        int ret = 0;
        for (auto num: nums)
            ++knums[num];
        for (auto m:knums) {
            if (k == 0 && m.second > 1)
                ++ret;
            else if (k > 0 && knums.find(m.first - k) != knums.end())
                ++ret;
        }
        return ret;
    }
};
