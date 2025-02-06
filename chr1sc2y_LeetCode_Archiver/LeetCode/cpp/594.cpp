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
    int findLHS(vector<int> &nums) {
        unordered_map<int, int> count;
        for (auto &n:nums)
            ++count[n];
        int total = 0;
        for (auto &iter:count)
            if (count.find(iter.first + 1) != count.end() && iter.second + count[iter.first + 1] > total)
                total = iter.second + count[iter.first + 1];
        return total;
    }
};
