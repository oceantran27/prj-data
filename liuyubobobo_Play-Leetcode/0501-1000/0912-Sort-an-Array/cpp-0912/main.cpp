#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/// Source : https://leetcode.com/problems/sort-an-array/
/// Author : liuyubobobo
/// Time   : 2021-07-09

#include <iostream>
#include <vector>

using namespace std;


/// Sorting API
/// Time Complexity: O(nlogn)
/// Space Complexity: O(1)
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};


int main() {

    return 0;
}
