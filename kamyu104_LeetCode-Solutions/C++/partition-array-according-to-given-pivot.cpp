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
// Space: O(n)

// two pointers
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(size(nums), pivot);
        int left = 0, right = size(nums) - count_if(cbegin(nums), cend(nums), [&pivot](const auto& x) { return x > pivot; });
        for (const auto& x: nums) {
            if (x < pivot) {
                result[left++] = x;
            } else if (x > pivot) {
                result[right++] = x;
            }
        }
        return result;
    }
};
