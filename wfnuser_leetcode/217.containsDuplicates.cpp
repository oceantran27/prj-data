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
        unordered_set<int> lookup;
        for (auto num: nums) {
            if (lookup.find(num) != lookup.end()) {
                return true;
            }
            lookup.insert(num);
        }
        return false;
    }
};