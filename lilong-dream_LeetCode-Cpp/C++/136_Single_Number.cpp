#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://oj.leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(int A[], int n) {
        int res = 0;
        
        for(int i = 0; i < n; ++i)
        {
            res ^= A[i];
        }
        
        return res;
    }
};

