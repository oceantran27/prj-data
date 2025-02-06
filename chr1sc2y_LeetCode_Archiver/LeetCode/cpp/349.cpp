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
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
        unordered_set<int> s;
        vector<int> nums;
        for (auto n: nums1)
            if (s.find(n) == s.end())
                s.insert(n);
        for (auto n:nums2) {
            if (s.find(n) != s.end()) {
                nums.push_back(n);
                s.erase(n);
            }
        }
        return nums;
    }
}; 