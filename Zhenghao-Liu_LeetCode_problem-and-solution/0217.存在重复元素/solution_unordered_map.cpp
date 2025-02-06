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
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> nums_map;
        for (int &i:nums)
        {
            ++nums_map[i];
            if (nums_map.at(i)>=2)
                return true;
        }
        return false;
    }
};
