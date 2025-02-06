#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
// interview16.05: 阶乘尾数

/*
 * https://leetcode-cn.com/problems/factorial-zeros-lcci/
 */

#include <vector>

using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        long long iter = 5;
        while(n / iter)
        {
            ans += n / iter;
            iter *= 5;
        }
        return ans;
    }
};
