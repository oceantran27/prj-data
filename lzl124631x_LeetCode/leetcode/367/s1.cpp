#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/valid-perfect-square/
// Author: github.com/lzl124631x
// Time: O(sqrt(num))
// Space: O(1)
class Solution {
public:
    bool isPerfectSquare(int num) {
        long i = 0;
        while (i * i < num) ++i;
        return i * i == num;
    }
};