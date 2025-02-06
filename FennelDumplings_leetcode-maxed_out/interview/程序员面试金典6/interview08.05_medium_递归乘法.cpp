#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// interview08.05: 递归乘法

/*
 * https://leetcode-cn.com/problems/recursive-mulitply-lcci/
 */

class Solution {
public:
    int multiply(int A, int B) {
        if(A < B) return multiply(B, A);
        if(B == 1) return A;
        int x = multiply(A, B / 2);
        if(B & 1)
            return x + x + A;
        return  x + x;
    }
};
