#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// prob1486: XOR Operation in an Array

/*
 * https://leetcode-cn.com/problems/xor-operation-in-an-array/
 */

#include <vector>

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = 0;
        for(int i = 0; i < n; ++i)
        {
            int cur = start + i * 2;
            result ^= cur;
        }
        return result;
    }
};
