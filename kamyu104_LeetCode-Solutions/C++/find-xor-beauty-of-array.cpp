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

// bit manipulation, math
class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        return accumulate(cbegin(nums), cend(nums), 0, [](int a, int b) {
            return a ^ b;
        });
    }
};
