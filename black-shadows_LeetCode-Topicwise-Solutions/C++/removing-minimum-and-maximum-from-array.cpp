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

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int i = min_element(cbegin(nums), cend(nums)) - cbegin(nums);
        int j = max_element(cbegin(nums), cend(nums)) - cbegin(nums);
        if (i > j) {
            swap(i, j);
        }
        return min({(i + 1) + (static_cast<int>(size(nums) - j)), j + 1, static_cast<int>(size(nums)) - i}); 
    }
};
