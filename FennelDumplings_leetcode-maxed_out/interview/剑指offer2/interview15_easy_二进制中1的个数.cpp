#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// interview15: 二进制中1的个数

/*
 * https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/
 */

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n)
        {
            ans += n % 2;
            n /= 2;
        }
        return ans;
    }
};
