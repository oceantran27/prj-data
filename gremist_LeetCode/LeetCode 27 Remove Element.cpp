#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 27 Remove Element.cpp

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = 0;
        for (int n : nums) {
            if (n != val) {
                nums[len++] = n;
            }
        }
        return len;
    }
};