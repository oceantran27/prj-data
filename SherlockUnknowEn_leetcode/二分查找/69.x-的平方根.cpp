#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = x >> 1;
        
        while (left <= right) {
            long mid = left + ((right - left) >> 1);
            if (mid*mid > x) {
                if ((mid - 1) * (mid - 1) <= x)
                    return mid - 1;
                right = mid - 1;
            } else if (mid*mid < x) {
                if ((mid + 1) * (mid + 1) > x)
                    return mid;
                left = mid + 1;
            } else {
                return mid;
            }
        }
        return 1; // testcase  1   return 1
    }
};
// @lc code=end

