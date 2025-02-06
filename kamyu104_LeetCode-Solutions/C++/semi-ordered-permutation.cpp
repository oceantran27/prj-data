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

// greedy
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        const int i = distance(cbegin(nums), find(cbegin(nums), cend(nums), 1));
        const int j = distance(cbegin(nums), find(cbegin(nums), cend(nums), size(nums)));
        return i + ((size(nums) - 1) - j) - static_cast<int>(i > j);
    }
};
