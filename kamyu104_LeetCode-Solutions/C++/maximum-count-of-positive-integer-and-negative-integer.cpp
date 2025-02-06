#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

// binary search
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        return max(
            distance(cbegin(nums), lower_bound(cbegin(nums), cend(nums), 0)),
            distance(lower_bound(cbegin(nums), cend(nums), 1),  cend(nums))
        ); 
    }
};
