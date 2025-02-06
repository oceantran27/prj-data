#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

// array
class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        return ranges::max(nums2) - ranges::max(nums1);
    }
};
