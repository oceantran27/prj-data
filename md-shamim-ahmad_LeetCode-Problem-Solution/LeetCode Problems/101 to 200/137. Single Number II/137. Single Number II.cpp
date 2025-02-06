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
    int singleNumber(vector<int> &nums) {
        map<int, int> mp;
        for (auto ele: nums) {
            mp[ele]++;
        }
        for (auto it: mp) {
            if (it.second == 1)
                return it.first;
        }
        return 0;
    }
};